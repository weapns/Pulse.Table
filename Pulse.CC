 getgenv().Pulse = {
    ['Key'] = {'YOURKEYHERE'};

    ['Silent Aim'] = {
        ['Settings']    = {['Enabled'] = true, ['Hit Chance'] = 100};
        ['Keybind']     = {['Enabled'] = true, ['Key'] = 't', ['Notification'] = true};
        ['Prediction']  = {['Enabled'] = true, ['Auto Prediction'] = true, ['Prediction'] = 0.243};
        ['Hit Part']    = {['Nearest Point'] = true, ['Hit Part'] = 'HumanoidRootPart'};
    };

    ['Camera Lock'] = {
        ['Settings']    = {['Enabled'] = false, ['Third Person'] = true, ['First Person'] = true};
        ['Keybind']     = {['Hold'] = false, ['Mode'] = 'Keybind', ['Key'] = 'c', ['Mousebind'] = Enum.UserInputType.MouseButton2};
        ['Prediction']  = {['Enabled'] = true, ['Prediction'] = 0.145};
        ['Style']       = {['First Style'] = 'Sine', ['Second Style'] = 'Sine'};
        ['Smoothness']  = {['Enabled'] = true, ['Smoothness'] = 0.184, ['Air Shot Smoothness'] = 0.345};
        ['Shake']       = {['Enabled'] = false, ['Direction'] = {['X'] = 8, ['Y'] = 6, ['Z'] = 7}};
        ['Hit Part']    = {['Nearest Part'] = true, ['Air Shot Part'] = false, ['Parts'] = {['Default'] = 'HumanoidRootPart', ['Air Shot'] = 'HumanoidRootPart'}};
        ['Auto Unlock'] = {['If Typing'] = false, ['If Reloading'] = false};
    };

    ['Trigger Bot'] = {
        ['Settings'] = {['Enabled'] = false, ['Notification'] = false, ['Delay'] = 0.065};
        ['Keybind']  = {['Enabled'] = true, ['Key'] = 'L'}
    };

    ['FoV'] = {
        ['Silent Aim']  = {['Visible'] = true, ['Radius'] = {['Use'] = true, ['Amount'] = 50,}, ['Stick'] = true};
        ['Camera Lock'] = {['Visible'] = true, ['Radius'] = {['Use'] = true, ['Amount'] = 55}, ['Stick'] = true};

        ['Weapon FoV']  = {
            ['Enabled']           = false;
            ['Double Barrel']     = 22;
            ['Revolver']          = 27;
            ['Shotgun']           = 35;
            ['Tactical Shotgun']  = 35;
            ['Smg']               = 25;
            ['Silencer']          = 32;
            ['P90']               = 40;
            ['Ak47']              = 50;
            ['Drum Gun']          = 60;
        };
    };

    ['Adjustments'] = {
        ['Aiming Settings'] = {
            ['Resolver']        = true;
            ['Anti Aim Viewer'] = true;
            ['No Ground Shots'] = true;
            ['Anti Curve']      = true;
        };

        ['Checks'] = {
            ['Player Check'] = true;
            ['Wall Check']   = true;
            ['Crew Check']   = false;
            ['Knock Check']  = true;
        };

        ['Fake Lag Spike'] = {
            ['Enabled']  = true;
            ['Keybind']  = 'B';
            ['Duration'] = 1;           
        };

        ['Macro'] = {
            ['Enabled']  = true;
            ['Keybind']  = Enum.KeyCode.X;
            ['Hold Key'] = false;
            ['Mode']     = '1';
        };

        ['Frame Skip'] = {
            ['Enabled']      = true;
            ['Keybind']      = 'z';
            ['Use Keybind']  = true;
            ['Notification'] = false;
        };

        ['Auto 360'] = {
            ['Enabled']   = false;
            ['Keybind']   = 'Q';
            ['Speed']     = 1;
        };

        ['Memory Spoof'] = {
            ['Enable'] = true;
            ['Start']  = 1271;
            ['End']    = 1684;
            ['Speed']  = 1.24;
        };

        ['Sort Inventory'] = {
            ['Enabled'] = false;
            ['Keybind'] = Enum.KeyCode.H;
            ['Tool 1']  = '[Knife]';
            ['Tool 2']  = '[Revolver]';
            ['Tool 3']  = '[Double-Barrel SG]';
            ['Tool 4']  = '[Chicken]';
            ['Tool 5']  = '[Chicken]';
            ['Tool 6']  = '[Pizza]';
            ['Tool 7']  = '[Pizza]';
            ['Tool 8']  = '';
            ['Tool 9']  = '';
            ['Tool l0'] = '[Katana]';
        };

        ['Animation Keybinds'] = {
            ['Lay']    = {['Enabled'] = true, ['Keybind'] = Enum.KeyCode.T};
            ['Greet']  = {['Enabled'] = true, ['Keybind'] = Enum.KeyCode.G};
            ['Speed']  = {['Enabled'] = false, ['Keybind'] = Enum.KeyCode.N};
            ['Sturdy'] = {['Enabled'] = false, ['Keybind'] = Enum.KeyCode.H};
            ['Griddy'] = {['Enabled'] = false, ['Keybind'] = Enum.KeyCode.G};
        };
        ['Range Fov'] = {
            ['Distances'] = {['Close'] = 15, ['Mid'] = 100, ['Far'] = 9e9,};
            ['Fov'] = {['Close'] = 25, ['Mid'] = 10, ['Far'] = 5,};
        };
        ['Chat Commands'] = {
            ['Enabled'] = true;

            ['Silent Aim']  = {['FoV'] = '!fov', ['Prediction'] = '!pred'};
            ['Camera Lock'] = {['FoV'] = '/fov', ['Prediction'] = '/pred', ['Smoothness'] = '/smoothness'};
        },


        };
    };
--
loadstring(game:HttpGet("https://raw.githubusercontent.com/weapns/Pulse/main/Pulse.cc"))
