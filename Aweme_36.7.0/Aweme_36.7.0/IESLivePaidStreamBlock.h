@class NSArray, UIVisualEffectView, NSHashTable, IESLivePaidStreamUIConfig, UIView, NSString;
@protocol IESLiveSubscription, IESLivePaidStreamBlockView, IESLivePaidBlockDelegate;

@interface IESLivePaidStreamBlock : NSObject <IESLivePaidBlock>

@property (retain, nonatomic) NSHashTable *blockEventHandlers;
@property (retain, nonatomic) IESLivePaidStreamUIConfig *uiConfig;
@property (copy, nonatomic) NSArray *trialViewFrameSubscriptions;
@property (retain, nonatomic) id<IESLiveSubscription> blockViewSuperViewSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> blurEffectViewSuperViewSubscription;
@property (nonatomic) unsigned long long blockType;
@property (nonatomic) long long paidScene;
@property (nonatomic) long long paidChannel;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView<IESLivePaidStreamBlockView> *blockView;
@property (weak, nonatomic) id<IESLivePaidBlockDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trialView;
- (id)trialContainerView;
- (void)sendEventWillDisplayForBlockType:(unsigned long long)a0;
- (void)sendEventDidEndDisplayForBlockType:(unsigned long long)a0;
- (void)sendEventActionForBlockType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setupWithUIConfig:(id)a0;
- (void)registerBlockEventHandler:(id)a0;
- (void)unregisterBlockEventHandler:(id)a0;
- (void)installBlockView:(unsigned long long)a0 paidScene:(long long)a1 paidChannel:(long long)a2;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredBlockEventHandlers;
- (void)disposeAllSubscription;
- (void)installBlurEffectView;
- (void)installBlockView;
- (void)observerTrialViewFrame;
- (void)uninstallBlurEffectView;
- (void)uninstallBlockView;
- (BOOL)useHierarchyContainerView:(id)a0;
- (void)observerBlurEffectViewSuperView:(id)a0;
- (void)observerBlockViewSuperView:(id)a0;
- (void)disposeTrialViewFrameSubscription;
- (void)layoutBlockView;
- (void)disposeBlurEffectViewSuperViewSubscription;
- (void)disposeBlockViewSuperViewSubscription;
- (void)uninstall;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
