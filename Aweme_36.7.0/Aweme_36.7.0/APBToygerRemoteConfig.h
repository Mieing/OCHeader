@class APBToygerNavigatePage, ToygerAlgorithmConfig, NSArray, APBToygerCollect, APBToygerUploadConfig, APBToygerTips, NSDictionary, NSString, APBToygerVideo, NSNumber, APBToygerSceneEnv;

@interface APBToygerRemoteConfig : NSObject

@property (retain, nonatomic) APBToygerSceneEnv *sceneEnv;
@property (retain, nonatomic) APBToygerNavigatePage *navi;
@property (copy, nonatomic) NSDictionary *suitable;
@property (retain, nonatomic) APBToygerCollect *coll;
@property (retain, nonatomic) APBToygerUploadConfig *upload;
@property (retain, nonatomic) ToygerAlgorithmConfig *algorithm;
@property (copy, nonatomic) NSArray *scanAlgorithm;
@property (retain, nonatomic) APBToygerTips *faceTips;
@property (copy, nonatomic) NSNumber *env;
@property (nonatomic) long long ui;
@property (copy, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) APBToygerVideo *video;
@property (copy, nonatomic) NSString *verifyMode;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *controlConfig;
@property (copy, nonatomic) NSArray *sdkActionList;
@property (copy, nonatomic) NSDictionary *simpleFlags;

+ (id)getPropertyAttrs:(Class)a0;
+ (void)loadFrom:(id)a0 toObject:(id)a1 class:(Class)a2;
+ (void)loadFromJSON:(id)a0 toObject:(id)a1;
+ (id)defaultConfig;

- (void).cxx_destruct;

@end
