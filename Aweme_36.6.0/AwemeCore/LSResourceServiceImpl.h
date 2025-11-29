@class NSDictionary, NSString;

@interface LSResourceServiceImpl : NSObject <LSResourceService>

@property (copy, nonatomic) NSDictionary *colorMaps;
@property (copy, nonatomic) NSDictionary *uiImageMaps;
@property (copy, nonatomic) NSDictionary *imImageMaps;
@property (copy, nonatomic) NSDictionary *poiImageMaps;
@property (copy, nonatomic) NSDictionary *duxImageMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)colorForName:(id)a0 resourceTheme:(long long)a1;
- (id)imageForName:(id)a0;
- (id)imageForName:(id)a0 resourceTheme:(long long)a1;
- (id)resourceNameForName:(id)a0 resourceTheme:(long long)a1;
- (void).cxx_destruct;
- (id)colorForName:(id)a0;
- (BOOL)isLightTheme;

@end
