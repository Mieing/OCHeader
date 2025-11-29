@interface AWEFeedGeneralLongVideoPlusViewCell : AWEFeedGeneralViewCell

+ (id)reuseIdentifierWithMediaType:(long long)a0 isFakeAweme:(BOOL)a1;

- (Class)interactionControllerFactory;
- (Class)viewControllerClassType;
- (BOOL)shouldPreventVideoPause;
- (void)pause;

@end
