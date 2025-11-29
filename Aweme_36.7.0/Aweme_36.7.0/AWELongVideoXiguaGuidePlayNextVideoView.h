@class UIImageView, DUXButton, UILabel, UIView, BDImageView;

@interface AWELongVideoXiguaGuidePlayNextVideoView : UIView

@property (nonatomic) BOOL isForceGuide;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *coverImageview;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXButton *openXiguaButton;
@property (retain, nonatomic) UIView *replayView;
@property (retain, nonatomic) UIImageView *replayIconView;
@property (retain, nonatomic) UILabel *replayLabel;
@property (copy, nonatomic) id /* block */ completion;

- (void)updateWithTitle:(id)a0 coverUrl:(id)a1;
- (void)openXiguaButtonAction;
- (void)replayOrContinuePlayVideo;
- (void)showXiguaGuideViewWithTitle:(id)a0 coverUrl:(id)a1 isForceGuide:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;

@end
