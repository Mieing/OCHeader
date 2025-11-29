@class UIImageView, LOTAnimationView, NSString;

@interface AWEEcomSearchSugGuideBotTableViewCell : AWEEcomSearchBaseSugTableViewCell

@property (retain, nonatomic) UIImageView *guideContentView;
@property (retain, nonatomic) LOTAnimationView *chatBotView;
@property (retain, nonatomic) NSString *lottiePath;
@property (retain, nonatomic) UIImageView *chatBotDefaultView;

+ (id)identifier;

- (void)configureUI;
- (void)configureWithContent:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)updateType;
- (void)configureWithModel:(id)a0;

@end
