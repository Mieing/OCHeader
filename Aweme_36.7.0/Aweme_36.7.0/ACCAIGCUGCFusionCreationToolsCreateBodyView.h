@class CAGradientLayer, UIImageView, UILabel, UIView, UIButton;
@protocol ACCAIGCUGCFusionCreationToolsCreateBodyViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsCreateBodyView : UIView

@property (retain, nonatomic) UIView *createBodyTipsView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *createBodyImageView;
@property (retain, nonatomic) UIButton *changeCreateBodyButton;
@property (retain, nonatomic) UIButton *changeLoraButton;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *starImageView;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsCreateBodyViewDelegate> delegate;

+ (double)width;

- (void)updateCreateBodyImageWithImage:(id)a0 personInfo:(id)a1;
- (void)createBodyTipsViewDidClicked;
- (void)createBodyImageViewDidClicked;
- (void)changeCreateBodyButtonDidClicked;
- (void)updateUIWithType:(unsigned long long)a0;
- (void)updateCreateBodyImageWithImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)layoutSubviews;
- (void)setupViews;

@end
