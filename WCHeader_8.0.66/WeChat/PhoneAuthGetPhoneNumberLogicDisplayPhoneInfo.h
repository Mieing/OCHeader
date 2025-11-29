@class NSString;

@interface PhoneAuthGetPhoneNumberLogicDisplayPhoneInfo : MMObject

@property (copy, nonatomic) NSString *phoneNumberString;
@property (nonatomic) BOOL isWxPhone;
@property (copy, nonatomic) NSString *showPhoneNumberString;
@property (copy, nonatomic) NSString *describeString;

- (void).cxx_destruct;

@end
