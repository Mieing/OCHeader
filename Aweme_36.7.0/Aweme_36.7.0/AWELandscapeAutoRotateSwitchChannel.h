@class NSString;

@interface AWELandscapeAutoRotateSwitchChannel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareImage;
- (void)didSelectShareItem:(id)a0;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (id)setupContainerView;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;

@end
