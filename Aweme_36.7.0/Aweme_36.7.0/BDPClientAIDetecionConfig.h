@class NSString, NSArray, NSDictionary;

@interface BDPClientAIDetecionConfig : NSObject

@property (nonatomic) long long cacheDuration;
@property (nonatomic) long long pathCacheDuration;
@property (nonatomic) BOOL phoneSecondDectionEnable;
@property (copy, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSString *sceneName;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long pathMaxCount;
@property (nonatomic) BOOL businessEnable;
@property (copy, nonatomic) NSArray *detectionList;
@property (nonatomic) BOOL snapshotEnable;
@property (readonly, nonatomic) long long configType;
@property (nonatomic) BOOL calculatePageHashEnable;
@property (copy, nonatomic) NSString *serverSceneName;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)defaultConfigWithType:(long long)a0;

- (void)updateConfigWithSettingDict:(id)a0;
- (void).cxx_destruct;

@end
