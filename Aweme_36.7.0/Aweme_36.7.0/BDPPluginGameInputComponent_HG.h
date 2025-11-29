@class NSString, BDPUniqueID, BDPInputView_HG;

@interface BDPPluginGameInputComponent_HG : BDPBridgeInstancePlugin <BDPInputViewDelegate_HG> {
    BDPInputView_HG *_keyborad;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)BDPInputView_HG:(id)a0 didConfirm:(id)a1;
- (void)BDPInputView_HG:(id)a0 didKeyboardHide:(id)a1;
- (void)BDPInputView_HG:(id)a0 didContentChange:(id)a1;
- (void)showKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateKeyboardWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
