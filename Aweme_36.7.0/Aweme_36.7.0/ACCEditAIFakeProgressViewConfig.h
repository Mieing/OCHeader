@class UIImage, NSString;

@interface ACCEditAIFakeProgressViewConfig : NSObject

@property (retain, nonatomic) UIImage *showImage;
@property (nonatomic) double maxTimeLength;
@property (nonatomic) double updateInterval;
@property (nonatomic) BOOL shouldOpenSecondPhaseOpt;
@property (nonatomic) double secondPhaseStartPoint;
@property (nonatomic) double secondPhaseUpdateInterval;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double maxProgress;
@property (nonatomic) double initProgress;
@property (nonatomic) BOOL shouldUpdateRealTimeProgress;
@property (nonatomic) double latestWaitTimeSeconds;

- (void).cxx_destruct;

@end
