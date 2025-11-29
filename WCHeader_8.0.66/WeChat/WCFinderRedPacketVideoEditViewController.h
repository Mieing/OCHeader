@class WCFinderRedPacketCropSliderView, MMUIButton, NSString, WCFinderRedPacketCoverCropView, UIScrollView, UILabel, WCFinderRedPacketVideoEditRequestParams;
@protocol WCFinderRedPacketVideoEditViewControllerDelegate;

@interface WCFinderRedPacketVideoEditViewController : MMUIViewController <UIScrollViewDelegate, WCFinderRedPacketCropSliderViewDelegate, WCFinderRedPacketCoverCropViewDelegate>

@property (retain, nonatomic) WCFinderRedPacketVideoEditRequestParams *requestParams;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) WCFinderRedPacketCoverCropView *coverCropView;
@property (retain, nonatomic) WCFinderRedPacketCropSliderView *sliderView;
@property (retain, nonatomic) MMUIButton *saveBtn;
@property (weak, nonatomic) id<WCFinderRedPacketVideoEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoUrl:(id)a0 minSeconds:(long long)a1 maxSeconds:(long long)a2;
- (void)willDisappear;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)navigationBarBackgroundColor;
- (void)layoutAllSubviews;
- (void)onClickSavebtn;
- (void)loadCoverInfo;
- (void)onSliderViewPanGesture:(long long)a0;
- (void)onSliderViewScrollAction;
- (void)throttleCheckCropViewScroll;
- (id)getCoverCropRangeModel;
- (void).cxx_destruct;

@end
