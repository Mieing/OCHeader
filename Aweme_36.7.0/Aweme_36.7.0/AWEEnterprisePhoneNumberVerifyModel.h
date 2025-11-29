@class NSString, AWEEnterprisePhonePropsModel, AWEEnterpriseCardPropsModel;

@interface AWEEnterprisePhoneNumberVerifyModel : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *codeViewTitle;
@property (retain, nonatomic) AWEEnterpriseCardPropsModel *cardProps;
@property (retain, nonatomic) AWEEnterprisePhonePropsModel *phoneProps;
@property (copy, nonatomic) NSString *phonePlaceHolder;
@property (copy, nonatomic) NSString *verifyCodePlaceHolder;
@property (copy, nonatomic) NSString *verifyCodeButtonText;
@property (copy, nonatomic) NSString *pushPhoneInfoButtonText;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *phoneNumberId;
@property (copy, nonatomic) NSString *verifyCodeId;
@property (copy, nonatomic) NSString *verifyCode;
@property (copy, nonatomic) NSString *getCodeApi;
@property (copy, nonatomic) NSString *phoneSubmitApi;
@property (copy, nonatomic) NSString *cardId;

- (id)convertToDictWithString:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
