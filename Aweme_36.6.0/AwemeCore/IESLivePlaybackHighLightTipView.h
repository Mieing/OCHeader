@class IESLivePlaybackHighLightTipArrowBtn, UIImageView, UILabel, UIView;

@interface IESLivePlaybackHighLightTipView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIImageView *hotTagView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) IESLivePlaybackHighLightTipArrowBtn *arrowBtn;
@property (copy, nonatomic) id /* block */ arrowAction;

- (void)showHighLightTipInView:(id)a0 onView:(id)a1 model:(id)a2;
- (BOOL)enableNewDetailPanel;
- (void)p_showSelfInView:(id)a0 onView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
