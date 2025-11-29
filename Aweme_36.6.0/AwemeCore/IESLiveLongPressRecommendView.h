@class UILabel, UIButton, UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveLongPressRecommendView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *webpView;
@property (nonatomic) BOOL hasRecommend;
@property (nonatomic) BOOL newStyle;
@property (copy, nonatomic) id /* block */ shareButtonClicked;

- (void)setupNewStyleUI;
- (void)setupOldStyleUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasRecommend:(BOOL)a1 isNewStyle:(BOOL)a2;
- (void)p_shareButtonClicked;
- (void).cxx_destruct;
- (void)setupUI;

@end
