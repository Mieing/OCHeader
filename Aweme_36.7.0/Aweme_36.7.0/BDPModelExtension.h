@class NSArray, NSString, BDPLaunchAppSceneConfig, NSDictionary, BDPUniqueID;

@interface BDPModelExtension : NSObject <NSCoding>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSArray *shareChannelBlockList;
@property (copy, nonatomic) NSString *awemeUid;
@property (copy, nonatomic) NSString *awemeSecUid;
@property (nonatomic) BOOL awemeAllowFollowCallback;
@property (retain, nonatomic) BDPLaunchAppSceneConfig *launchAppSceneConfig;
@property (nonatomic) BOOL privacyConfigured;
@property (nonatomic) BOOL allowToShowBottomBar;
@property (nonatomic) long long appSwitch;
@property (copy, nonatomic) NSString *corpName;
@property (copy, nonatomic) NSString *bodyName;
@property (nonatomic) long long bodyType;
@property (retain, nonatomic) NSArray *employeeList;
@property (nonatomic) BOOL secretPhoneCallConfig;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSArray *shieldPageHashList;
@property (copy, nonatomic) NSDictionary *shareSetting;

+ (id)modelCustomPropertyMapper;
+ (id)modelExtensionWithUniqueID:(id)a0;
+ (void)updateWithUniqueID:(id)a0 isSandBox:(BOOL)a1 completion:(id /* block */)a2;
+ (void)updateWithUniqueID:(id)a0 suffixMetaURL:(id)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
