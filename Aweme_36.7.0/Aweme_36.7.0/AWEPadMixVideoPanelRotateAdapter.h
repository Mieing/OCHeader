@class NSString;

@interface AWEPadMixVideoPanelRotateAdapter : NSObject <AWEPadMixVideoPanelRotateAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (double)getMixPanelHeight;
+ (BOOL)Enable;

- (id)aAWEPadSplitScreenAdapter;
- (BOOL)isMixVideoSplitStyle;
- (void)performViewDidLayoutForRotateWithTransitionSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)performUIAdapter:(id /* block */)a0;
- (BOOL)isCurrentLandscapeWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)defaultStyleLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)multiScreenStyleLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)getMixPanelWidth;
- (id)weakTarget;

@end
