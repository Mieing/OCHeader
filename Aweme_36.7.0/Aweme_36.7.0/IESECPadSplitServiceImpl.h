@class NSString;

@interface IESECPadSplitServiceImpl : NSObject <IESECPadSplitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)supportGoodsDetailSpilt;
+ (void)viewDidAppearWith:(id)a0;
+ (void)enterSplitScreenWithPage:(id)a0 rightScene:(id)a1 interactionController:(id)a2 animate:(BOOL)a3;
+ (id)getPadModuleAdapter;
+ (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1 withPage:(id)a2;
+ (void)executePadSpiltCloseActionWithPage:(id)a0 animate:(BOOL)a1 completion:(id /* block */)a2;
+ (double)splitWidth;
+ (BOOL)isEnableSplitScreen;
+ (BOOL)supportECSplitScreen;

- (id)aAWEPadModuleAdapter;

@end
