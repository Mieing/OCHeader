@class NSString, UIImageView, UILabel;

@interface AWEDiscoverFeedEntranceView : AWEFeedEntranceButton <AWEFeedThemeManagerProtocol, AWEDiscoverFeedEntranceViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;

- (void)themeDidChange:(long long)a0;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)setAlpha:(double)a0;

@end
