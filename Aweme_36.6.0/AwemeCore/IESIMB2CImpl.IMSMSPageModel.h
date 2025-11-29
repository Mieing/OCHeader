@class NSString;

@interface IESIMB2CImpl.IMSMSPageModel : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ subTitle;
    void /* function */ maskNumber;
    void /* function */ confirmTitle;
    void /* function */ source;
    void /* function */ region;
    void /* function */ confirmIng;
    void /* function */ placeHolderNumber;
    void /* function */ verifyPlaceHolder;
    void /* function */ changeButtonName;
    void /* function */ sendVerifyCodeTitle;
    void /* function */ numberTextFieldFormat;
    void /* function */ verifyTextFieldFormat;
    void /* function */ peerUid;
    void /* function */ smsCode;
    void /* function */ verifyResendTitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *maskNumber;
@property (nonatomic, copy) NSString *confirmTitle;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *confirmIng;
@property (nonatomic, copy) NSString *placeHolderNumber;
@property (nonatomic, copy) NSString *verifyPlaceHolder;
@property (nonatomic, copy) NSString *changeButtonName;
@property (nonatomic, copy) NSString *sendVerifyCodeTitle;
@property (nonatomic) long long numberTextFieldMaxLength;
@property (nonatomic, copy) NSString *numberTextFieldFormat;
@property (nonatomic) long long verifyTextFieldMaxLength;
@property (nonatomic) long long verifyTextFieldMinLength;
@property (nonatomic, copy) NSString *verifyTextFieldFormat;
@property (nonatomic, copy) NSString *peerUid;
@property (nonatomic, copy) NSString *smsCode;
@property (nonatomic, copy) NSString *verifyResendTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
