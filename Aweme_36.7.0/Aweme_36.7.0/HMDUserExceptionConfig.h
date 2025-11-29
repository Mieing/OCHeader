@class NSDictionary, NSArray;

@interface HMDUserExceptionConfig : HMDTrackerConfig

@property (nonatomic) long long maxUploadCount;
@property (retain, nonatomic) NSDictionary *typeBlockList;
@property (retain, nonatomic) NSArray *typeAllowList;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)isPreferredIfDebug;
- (void).cxx_destruct;
- (BOOL)canStart;

@end
