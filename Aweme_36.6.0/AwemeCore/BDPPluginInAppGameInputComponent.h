@class NSString, BDPUniqueID, BDPInteractGameInputView;

@interface BDPPluginInAppGameInputComponent : BDPBridgeInstancePlugin <BDPInteractGameInputViewDelegate> {
    BDPInteractGameInputView *_keyborad;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interactGameInputView:(id)a0 didConfirm:(id)a1;
- (void)interactGameInputView:(id)a0 didKeyboardHide:(id)a1;
- (void)interactGameInputView:(id)a0 didContentChange:(id)a1;
- (void)showGameKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideGameKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateGameKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
