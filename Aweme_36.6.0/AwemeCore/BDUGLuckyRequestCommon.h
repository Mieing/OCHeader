@class NSString;

@interface BDUGLuckyRequestCommon : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) long long settingsVersion;
@property (copy, nonatomic) NSString *actBase;
@property (copy, nonatomic) NSString *actData;
@property (copy, nonatomic) NSString *actToken;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
