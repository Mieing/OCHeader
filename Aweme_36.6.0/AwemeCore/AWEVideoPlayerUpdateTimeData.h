@protocol AWEPlayVideoViewControllerDelegate;

@interface AWEVideoPlayerUpdateTimeData : NSObject

@property (retain, nonatomic) id<AWEPlayVideoViewControllerDelegate> videoViewController;
@property (nonatomic) double playTime;
@property (nonatomic) double totalTime;

- (void).cxx_destruct;

@end
