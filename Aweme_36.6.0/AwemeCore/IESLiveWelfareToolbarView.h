@class UIImageView, NSString, UIImage;
@protocol IESLiveWebPPlayer;

@interface IESLiveWelfareToolbarView : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *iconImageView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) unsigned long long animationType;
@property (retain, nonatomic) NSString *spiltWebpString;
@property (retain, nonatomic) NSString *cardOutWebpString;
@property (retain, nonatomic) NSString *cardBackWebpString;
@property (retain, nonatomic) UIImage *welfareSpiltWebp;
@property (retain, nonatomic) UIImage *welfareCardOutWebp;
@property (retain, nonatomic) UIImage *welfareCardBackWebp;
@property (retain, nonatomic) UIImage *welfareSpiltWebpTheme;
@property (retain, nonatomic) UIImage *welfareCardOutWebpTheme;
@property (retain, nonatomic) UIImage *welfareCardBackWebpTheme;

- (void)startAnimationWithType:(unsigned long long)a0;
- (void)playAnimationWithType:(unsigned long long)a0;
- (void)changeImageWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
