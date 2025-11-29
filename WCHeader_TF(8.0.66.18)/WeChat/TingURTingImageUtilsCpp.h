@class NSString;

@interface TingURTingImageUtilsCpp : UnitRCObjcBaseProxyClass <TingURTingImageUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)generatePlayerBackground:(id)a0 imageInfo:(id)a1 isMusic:(BOOL)a2 callback:(id /* block */)a3;
- (void)generateMinibarBackground:(id)a0 imageInfo:(id)a1 callback:(id /* block */)a2;
- (void)imageColorsAsync:(id)a0 imageInfo:(id)a1 callback:(id /* block */)a2;

@end
