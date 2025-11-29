@class IESLLPOIDetailUGCVideoProgressTimeView, IESLLPOIDetailUGCSliderView, NSDictionary, NSString, UIView, IESLLPOIDetailUGCVideoPreviewCell, UIButton;
@protocol BDXViewContainerProtocol;

@interface IESLLPOIDetailUGCInteractionHelper : NSObject <IESLLPOIDetailUGCVideoPreviewCellDelegate, IESLLPOIDetailUGCSliderDelegate>

@property (nonatomic) long long currentIndex;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long currentSliderState;
@property (weak, nonatomic) UIButton *muteIcon;
@property (weak, nonatomic) IESLLPOIDetailUGCVideoPreviewCell *videoCell;
@property (weak, nonatomic) IESLLPOIDetailUGCSliderView *sliderView;
@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *lynxRateView;
@property (weak, nonatomic) IESLLPOIDetailUGCVideoProgressTimeView *videoProgressTimeView;
@property (copy, nonatomic) NSDictionary *rateTrackingParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapOnMuteIcon;
- (void)videoDidPlay:(double)a0;
- (void)playerViewDidTap:(long long)a0;
- (void)progressSlideChangeValue:(id)a0;
- (void)progressSliderDidEndSlide:(id)a0;
- (void)updateProgressWithPage:(long long)a0 totalCount:(long long)a1 mediaType:(long long)a2;
- (void)updateRateLynxViewWithRawData:(id)a0;
- (void).cxx_destruct;

@end
