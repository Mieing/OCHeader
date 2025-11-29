@class NSString, NSDictionary, NSDate;

@interface AWECarrierLoginPhoneModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) long long carrierType;
@property (nonatomic) unsigned long long maskTokenSettingScene;
@property (retain, nonatomic) NSDate *latestSuccessRequestDate;
@property (copy, nonatomic) NSDictionary *carrierMaskToken;
@property (copy, nonatomic) NSDictionary *carrierValidateToken;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
