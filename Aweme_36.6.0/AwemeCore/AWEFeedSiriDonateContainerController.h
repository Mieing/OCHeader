@class NSString;

@interface AWEFeedSiriDonateContainerController : AWEBaseController

@property (nonatomic) BOOL canDonate;
@property (nonatomic) BOOL hasDonate;
@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) long long totalTime;
@property (nonatomic) float biggerRatio;
@property (nonatomic) float lesserRatio;

- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
