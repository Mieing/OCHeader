@class NSString;

@interface IESIMUIResourceService : HTSService <IESIMUIResourceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awe_mainImageNamed:(id)a0;
- (id)awe_friendsImageNamed:(id)a0;
- (id)dux_imageNamed:(id)a0;
- (id)awe_studioImageNamed:(id)a0;
- (id)awe_imImageNamed:(id)a0;
- (id)awe_userCenterImageNamed:(id)a0;
- (id)awe_shareImageNamed:(id)a0;
- (id)awe_concernImageNamed:(id)a0;
- (id)iconType:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (id)iconNamed:(id)a0 size:(struct CGSize { double x0; double x1; })a1 color:(id)a2;
- (id)iconNameWithType:(long long)a0;
- (id)dux_iconWithName:(id)a0 bundle:(id)a1 color:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)image:(id)a0 withThemeColor:(id)a1;
- (id)imageWithThemeColor:(id)a0;
- (id)imageWithThemeColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isDynamicImage:(id)a0;
- (id)resolveImage:(id)a0 with:(long long)a1;
- (id)dynamicImageWithResolveBlock:(id /* block */)a0;
- (id)awe_friendsGeckoImageWithName:(id)a0 dynamicTheme:(BOOL)a1;
- (id)awe_afdFeedImageNamed:(id)a0;
- (id)awe_noticeImageNamed:(id)a0;
- (id)awe_bizUIImageNamed:(id)a0;
- (id)awe_commonBundleImageNamed:(id)a0;
- (id)awe_formatBundleImageNamed:(id)a0;
- (id)awe_imageNamed:(id)a0 withBundleName:(id)a1;

@end
