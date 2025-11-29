@class IESLiveCountTimer, IESLiveImageView, UILabel, UIView;

@interface IESLiveCameraZoomGuideView : UIView

@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) IESLiveImageView *guideImageView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) IESLiveCountTimer *guideViewTimer;
@property (copy, nonatomic) id /* block */ onClearGuideView;

- (id)initWithDIContext:(id)a0;
- (void)clearGuideView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
