@class NSString, NSMutableString, TenpaySMCertificate, NSCharacterSet;

@interface TenpayDelegate : NSObject <UITextFieldDelegate> {
    NSMutableString *_inputText;
    NSString *_salt;
    NSString *_appendText;
    int _keyIndex;
    int _maxLen;
    id _returnTarget;
    SEL _returnCallback;
    id _changeTarget;
    SEL _changeCallback;
    TenpaySMCertificate *_certificateHandler;
}

@property (nonatomic) BOOL bFormatBankCard;
@property (retain, nonatomic) NSCharacterSet *filterCharsSet;
@property (copy, nonatomic) NSString *whiteListCharsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setupSM;
- (void)SetReturn:(id)a0 callback:(SEL)a1;
- (void)SetChange:(id)a0 callback:(SEL)a1;
- (void)SetMaxInputLen:(int)a0;
- (void)AppendString:(id)a0;
- (id)DecodeCard:(id)a0;
- (id)DecodeCardWithAppend:(id)a0;
- (id)EncodeCard:(id)a0;
- (long long)spaceCountAtSrcCursor:(long long)a0;
- (long long)spaceCountAtFormatCursor:(long long)a0;
- (void)ResetInputText:(id)a0;
- (id)whiteListFilter:(id)a0;
- (void)textFieldDidChanged:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)GetVersion;
- (long long)GetInputInfo;
- (void)SetSalt:(id)a0;
- (void)SelectRsaKey:(int)a0;
- (void)ClearInput;
- (id)GetEncryptDataWithHash:(BOOL)a0;
- (id)Get2048EncryptDataWithHash:(BOOL)a0;
- (id)GetSM2EncryptData:(long long)a0 timestamp:(unsigned long long)a1 nonce:(id)a2;
- (id)Get3DesEncryptData;
- (id)GetSm4EncryptData;
- (BOOL)isPhoneNum;
- (BOOL)isBankCardNum;
- (BOOL)isUserIDNum;
- (BOOL)isAreaIDCardNum:(long long)a0;
- (id)GetAsteriskString:(id)a0;
- (id)GetEncryptCode;
- (id)GetUnEncryptCode;
- (void)setDefaultValue:(id)a0;

@end
