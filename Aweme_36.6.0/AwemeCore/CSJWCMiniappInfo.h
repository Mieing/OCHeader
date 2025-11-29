@class NSString;

@interface CSJWCMiniappInfo : NSObject <BUYYModel, CSJModelSerialization>

@property (copy, nonatomic) NSString *wcMiniappLink;
@property (nonatomic) unsigned long long wcSkipType;
@property (copy, nonatomic) NSString *advID;
@property (copy, nonatomic) NSString *siteID;
@property (copy, nonatomic) NSString *wcAppID;
@property (copy, nonatomic) NSString *wcUniversialLink;
@property (copy, nonatomic) NSString *wcMiniappSDK;
@property (nonatomic) unsigned long long wcOpenMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:(id)a0;

- (id)wcMiniappSourceURL;
- (BOOL)validWCMiniappLink;
- (BOOL)validWCMiniappOpenSDK;
- (BOOL)preferSchemeLinkAction;
- (BOOL)preferOpenSDKAction;
- (BOOL)preferTwoJumpWithOpenSDK;
- (BOOL)validWCMiniappOpenSDKRegisterInfo;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
