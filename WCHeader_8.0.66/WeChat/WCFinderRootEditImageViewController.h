@class UILabel;

@interface WCFinderRootEditImageViewController : WCEditImageViewController

@property (nonatomic) unsigned long long enterTime;
@property (retain, nonatomic) UILabel *naviLabel;
@property (nonatomic) BOOL shouldCropPhotoInVisibleFrame;

- (void)viewDidAppear:(BOOL)a0;
- (id)getReportExtInfoDismissState:(BOOL)a0 eventCode:(long long)a1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)setUpNaviLabel;
- (void).cxx_destruct;

@end
