@class NSString, NSCache;
@protocol IESECLiveUIConfigLoader;

@interface IESECLiveUIConfigService : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) double fontScale;
@property (nonatomic) unsigned long long fontSizeLevel;
@property (nonatomic) double liveUIFontScale;
@property (copy, nonatomic) NSString *liveUIFontScaleString;
@property (nonatomic) unsigned long long liveUIFontSizeLevel;
@property (retain, nonatomic) id<IESECLiveUIConfigLoader> configLoader;
@property (retain, nonatomic) NSCache *configCache;

+ (void)updateEnabledStatusByLiveContext:(id)a0;
+ (unsigned long long)liveUIFontSizeLevel;
+ (id)uiConfigsForComponent:(id)a0 withParams:(id)a1;
+ (id)liveUIFontScaleString;
+ (id)tryGetUIConfigsOfComponent:(id)a0 withParams:(id)a1;
+ (unsigned long long)fontSizeLevel;
+ (id)mutableCopyOrEmptyDict:(id)a0;
+ (BOOL)isEnabled;
+ (id)sharedInstance;

- (id)uiConfigsForComponent:(id)a0 withParams:(id)a1;
- (id)tryGetUIConfigsOfComponent:(id)a0 withParams:(id)a1;
- (id)getConfigJsonAndParseConfigModelOfComponent:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
