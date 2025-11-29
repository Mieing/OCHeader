@class NSArray;

@interface AWEFeedCachePeakValleyHelper : NSObject

@property (copy, nonatomic) NSArray *periodLimitArray;

+ (id)sharedInstance;

- (id)transToMinString:(id)a0;
- (id)transPeakTimeType:(id)a0;
- (BOOL)checkDownloadPeriodValidForScene:(long long)a0;
- (BOOL)checkDownloadPeriodValidAvoidPeakForScene:(long long)a0;
- (long long)sceneForKey:(id)a0;
- (void).cxx_destruct;

@end
