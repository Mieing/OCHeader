@class UILabel, UIImageView, UIView;

@interface IESLivePlaybackHighLightTipArrowBtn : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (copy, nonatomic) id /* block */ action;

- (id)initWithAction:(id /* block */)a0 withLine:(BOOL)a1;
- (void).cxx_destruct;
- (void)setup;
- (void)tapped;

@end
