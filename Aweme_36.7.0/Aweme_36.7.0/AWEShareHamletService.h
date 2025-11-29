@class NSString;

@interface AWEShareHamletService : AWEShareCommonImpl <AWEShareHamlet>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareHamletImage:(id)a0 isLandscape:(BOOL)a1 anchorExt:(id)a2 shareCompletion:(id /* block */)a3;
- (void)showCommonPanelWithHamletParams:(id)a0 isLandscape:(BOOL)a1;
- (id)unexpectedShareTypesWithShareContext:(id)a0;

@end
