@class NSString, NSError;

@interface AWENearbyPreloadCheckResultModel : NSObject

@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL feedCacheEnable;
@property (nonatomic) BOOL settingCacheEnable;
@property (retain, nonatomic) NSError *settingsError;
@property (retain, nonatomic) NSError *feedError;
@property (nonatomic) BOOL bSettingCompleteFlag;
@property (nonatomic) BOOL bFeedCompleteFlag;

- (void).cxx_destruct;

@end
