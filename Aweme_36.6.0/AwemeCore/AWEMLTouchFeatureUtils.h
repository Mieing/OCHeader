@protocol AWEOHRServiceManager;

@interface AWEMLTouchFeatureUtils : NSObject

@property (retain, nonatomic) id<AWEOHRServiceManager> OHRServiceManager;

+ (id)sharedInstance;

- (id)getTouchHotArea;
- (BOOL)isCrossedHands;
- (id)getSlideSpeed;
- (id)getTouchLength;
- (long long)getTouchAreaIndex;
- (void).cxx_destruct;
- (id)init;

@end
