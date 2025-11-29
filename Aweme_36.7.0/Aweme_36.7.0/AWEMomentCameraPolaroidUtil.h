@class NSString;

@interface AWEMomentCameraPolaroidUtil : NSObject <AWEMomentCameraPolaroidUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSaveAsPolaroidStyle;
+ (void)generatePolaroidStyleWithPhoto:(id)a0 timestamp:(id)a1 filterID:(id)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)p_preloadPolaroidBGResourcesWithContext:(id)a0;
+ (void)p_preloadPolaroidFontResourcesWithContext:(id)a0;
+ (id)polaroidStyleConfigs;
+ (id)p_configItemForFilterID:(id)a0;
+ (long long)p_bgStyleForPhoto:(id)a0;
+ (id)p_generatePolaroidStyleWithPhoto:(id)a0 timestamp:(id)a1 frameImage:(id)a2 textFont:(id)a3 textTopOffset:(double)a4 config:(id)a5;
+ (void)p_drawPhoto:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 photoHeight:(double)a2 config:(id)a3;
+ (void)p_drawFrame:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
+ (void)p_drawTimestampTextWithFont:(id)a0 timestamp:(id)a1 canvasSize:(struct CGSize { double x0; double x1; })a2 photoHeight:(double)a3 textTopOffset:(double)a4 config:(id)a5;
+ (id)p_timestampText:(id)a0;
+ (id)p_timestampTextColorWithConfig:(id)a0;
+ (void)preloadPolaroidResourcesWithContextIfNeeded:(id)a0;


@end
