@interface AWEDCFeedImageTransformManager : NSObject

@property (nonatomic) double coverOriginResolution;

+ (id)getDCFeedImageTransFromConfig:(id)a0 aweme:(id)a1;
+ (id)getImageTrackInfoWithImageURL:(id)a0 aweme:(id)a1 image:(id)a2 useSR:(BOOL)a3 useSharp:(BOOL)a4;
+ (void)recordCoverOriginResolution:(double)a0;
+ (double)coverOriginResolution;
+ (BOOL)enableImageMonitorSeparate:(id)a0;
+ (id)getResultFromString:(long long)a0;
+ (id)shareInstance;

@end
