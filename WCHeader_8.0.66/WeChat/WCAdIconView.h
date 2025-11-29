@class UIImageView, UILabel, NSString;

@interface WCAdIconView : MMUIView

@property (nonatomic) long long iconType;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *labelLanguage;

- (id)initWithAdIconType:(long long)a0;
- (id)initWithAdIconType:(long long)a0 labelLanguage:(id)a1;
- (BOOL)initViews;
- (void).cxx_destruct;

@end
