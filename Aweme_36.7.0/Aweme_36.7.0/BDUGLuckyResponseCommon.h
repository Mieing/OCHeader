@class NSString, NSArray;
@protocol BDUGLuckyActivityInfo;

@interface BDUGLuckyResponseCommon : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) long long settingsVersion;
@property (copy, nonatomic) NSString *actBase;
@property (copy, nonatomic) NSString *actData;
@property (copy, nonatomic) NSString *actToken;
@property (copy, nonatomic) NSArray<BDUGLuckyActivityInfo> *activityInfos;
@property (nonatomic) BOOL isAppLogin;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
