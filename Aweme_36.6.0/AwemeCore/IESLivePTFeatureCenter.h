@class NSString, NSTimer;
@protocol IESLiveTracker;

@interface IESLivePTFeatureCenter : NSObject

@property (copy, nonatomic) NSString *business;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (retain, nonatomic) NSTimer *schedule;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableTimer;
@property (nonatomic) BOOL enableUpdateFeature;
@property (nonatomic) long long timerInterval;

- (void)startAnchorFeatureCollector;
- (void)stopAnchorFeatureCollector;
- (void)registerPackage;
- (id)updateFeature:(id)a0;
- (void)runPackage;
- (void).cxx_destruct;
- (id)init;

@end
