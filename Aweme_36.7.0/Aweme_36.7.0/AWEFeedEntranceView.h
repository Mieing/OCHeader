@class NSString, UIImageView, UILabel, UIView;

@interface AWEFeedEntranceView : UIView <AWEFeedThemeManagerProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL shouldFixTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configImage:(id)a0 Label:(id)a1 position:(unsigned long long)a2;
- (void)configAlpha:(double)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)themeDidChange:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
