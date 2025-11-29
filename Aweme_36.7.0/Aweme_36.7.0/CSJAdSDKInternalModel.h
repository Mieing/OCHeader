@class CSJLiveAdCustomConfig;

@interface CSJAdSDKInternalModel : NSObject

@property (readonly, nonatomic) CSJLiveAdCustomConfig *liveAdConfig;

+ (id)sharedInstance;

- (void)registerLiveAdCustomConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
