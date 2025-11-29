@class NSString, UILabel, UIView;

@interface AWESearchUserCardSocialCountView : UIView

@property (nonatomic) BOOL hasSeparator;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *sepView;
@property (nonatomic) BOOL shouldLimitCount;

+ (id)formatNumber:(unsigned long long)a0 limit10thBillion:(BOOL)a1;

- (void)updateCount:(unsigned long long)a0;
- (void)p_configLayout;
- (id)initWithType:(id)a0 count:(unsigned long long)a1 hasSeparator:(BOOL)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
