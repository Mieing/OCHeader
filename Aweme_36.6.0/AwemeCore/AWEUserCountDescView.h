@class NSString, UILabel;

@interface AWEUserCountDescView : UIView

@property (retain, nonatomic) NSString *titleKey;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UILabel *userCountDescLabel;

- (void)setupUIWithUserCount:(id)a0 TitleKey:(id)a1;
- (void)updateWithUserCount:(id)a0;
- (id)initWithUserCount:(id)a0 titleKey:(id)a1;
- (void)updateWithUserCount:(id)a0 title:(id)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
