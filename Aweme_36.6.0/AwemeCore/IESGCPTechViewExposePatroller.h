@class IESGCPTrackerViewDetector, NSMutableArray, IESGCPTrackerTrigger;

@interface IESGCPTechViewExposePatroller : NSObject

@property (retain, nonatomic) NSMutableArray *detectingBundlerArray;
@property (nonatomic) double defaultTimeout;
@property (retain, nonatomic) IESGCPTrackerTrigger *trigger;
@property (retain, nonatomic) IESGCPTrackerViewDetector *detector;

+ (id)sharedInstance;

- (void)detectViewExposeWithView:(id)a0 completion:(id /* block */)a1;
- (void)detectViewExposeWithView:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (id)packBundlerWithView:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)viewDetectFinishWithBundler:(id)a0 success:(BOOL)a1;
- (void)detectCurrentViews;
- (void).cxx_destruct;

@end
