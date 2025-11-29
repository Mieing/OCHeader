@class NSString;

@interface AWEIpadLongpressService : HTSService <AWEIpadLongpressService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLongPressModalViewControllerWithTriggerBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1 referString:(id)a2;
- (double)widthWithIMSectionContent:(id)a0;
- (double)widthWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)enableLongPressAlertOptimize;
- (void)performLongPressOptimizeBlockIfNeeded:(id /* block */)a0;

@end
