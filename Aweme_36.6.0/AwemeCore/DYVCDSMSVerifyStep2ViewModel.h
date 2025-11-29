@class NSString, DYPhoneNumberModel;

@interface DYVCDSMSVerifyStep2ViewModel : NSObject

@property (copy, nonatomic) NSString *UID;
@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;

+ (id)instanceWithUID:(id)a0 phoneNumber:(id)a1;

- (id)verifyWithCode:(id)a0;
- (id)sendCode;
- (void).cxx_destruct;

@end
