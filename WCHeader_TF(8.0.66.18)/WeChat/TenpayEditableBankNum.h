@class NSString, NSMutableArray, TenpayDelegate;

@interface TenpayEditableBankNum : UIView <UITextFieldDelegate> {
    TenpayDelegate *_dataHandler;
    NSMutableArray *arrTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andCodeNum:(id)a1;
- (void)setKeyboradImgWithNumNormal:(id)a0 ImageNumPress:(id)a1 ImageDelNormal:(id)a2 ImageDelPess:(id)a3;
- (void)setKeyboradImgWithNumNormal:(id)a0 ImageNumPress:(id)a1 ImageDelNormal:(id)a2 ImageDelPess:(id)a3 ImageExtendNormal:(id)a4 ImageExtendPress:(id)a5;
- (void)SetKeyboardNumFontColor:(id)a0 bgColor:(id)a1;
- (void)SetKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)setKeyboradOrientation:(long long)a0;
- (void)SetSalt:(id)a0;
- (void)SelectRsaKey:(int)a0;
- (id)getFullBankNum;
- (id)GetRsaEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetSM2EncryptData:(long long)a0 timestamp:(unsigned long long)a1 nonce:(id)a2;
- (id)Get3DesEncryptData;
- (id)GetSm4EncryptData;
- (void)textFieldDidBeginEditing:(id)a0;

@end
