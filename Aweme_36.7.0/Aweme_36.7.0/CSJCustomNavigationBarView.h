@class CSJMaterialMeta, UILabel, UIView, UIButton;
@protocol CSJCustomNavigationBarDelegate;

@interface CSJCustomNavigationBarView : UIView

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) unsigned long long navBarStyle;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *line;
@property (weak, nonatomic) id<CSJCustomNavigationBarDelegate> delegate;

- (void)closeAction:(id)a0;
- (void)layoutVideoLandingpage;
- (void)layoutNormalLandingpage;
- (void)layoutNormalLandingpageNew;
- (double)getDislikeButtonWidthWithHeight:(double)a0;
- (void)updateTitleLabel:(id)a0;
- (void)dislikeButtonTapped:(id)a0;
- (id)initWithMaterial:(id)a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (void)goBack:(id)a0;

@end
