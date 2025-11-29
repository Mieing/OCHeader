@class UILabel, UIImageView, UIView;

@interface IESLiveRaceHighLightTipShareBtn : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (id)initWithAction:(id /* block */)a0;
- (void)setup;
- (void)tapped;

@end
