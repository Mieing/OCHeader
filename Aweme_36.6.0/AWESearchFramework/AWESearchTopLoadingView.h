@class NSString, UIImageView, LOTAnimationView, UILabel, UIView, UIButton;

@interface AWESearchTopLoadingView : UIView

@property (retain, nonatomic) UIImageView *keywordIcon;
@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *AIIcon;
@property (retain, nonatomic) UILabel *AISearchTipLabel;
@property (retain, nonatomic) UILabel *AISearchLoadingLabel;
@property (retain, nonatomic) UIButton *clickButton;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIImageView *whirlView;
@property (retain, nonatomic) LOTAnimationView *douyinSSWhirlView;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) id /* block */ customSchemaAeraclick;
@property (nonatomic) BOOL isLoading;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (double)caculateTopLoadingViewHeightWithKeyword:(id)a0;
+ (double)caculateHeightForKeyword:(id)a0;

- (void)themeDidChange:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)updateWithKeyword:(id)a0;
- (void)clickButtonAction;
- (void)layoutUI:(BOOL)a0;
- (void)updateWithLoadingTip:(id)a0;
- (void)updateWithImageArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)updateWithImage:(id)a0;

@end
