@class AWERVLVVideoHallEntranceGuideView;

@interface AWERVLVVideoHallEntranceGuideElement : AWERVVideoInfoBaseElement

@property (retain, nonatomic) AWERVLVVideoHallEntranceGuideView *entranceView;
@property (nonatomic) BOOL isClose;

- (BOOL)shouldShowGuide;
- (void)trackLVButtonShow;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
