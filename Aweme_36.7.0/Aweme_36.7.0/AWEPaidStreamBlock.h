@class AWEPaidStreamUIConfig, UIVisualEffectView, NSHashTable, UIView, NSString;
@protocol AWEPaidStreamBlockView, AWEPaidBlockDelegate;

@interface AWEPaidStreamBlock : NSObject <AWEPaidBlock>

@property (retain, nonatomic) NSHashTable *blockEventHandlers;
@property (retain, nonatomic) AWEPaidStreamUIConfig *uiConfig;
@property (nonatomic) unsigned long long blockType;
@property (nonatomic) long long paidScene;
@property (nonatomic) long long paidChannel;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView<AWEPaidStreamBlockView> *blockView;
@property (weak, nonatomic) id<AWEPaidBlockDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trialContainerView;
- (void)sendEventWillDisplayForBlockType:(unsigned long long)a0;
- (void)sendEventDidEndDisplayForBlockType:(unsigned long long)a0;
- (void)sendEventActionForBlockType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setupWithUIConfig:(id)a0;
- (void)registerBlockEventHandler:(id)a0;
- (void)unregisterBlockEventHandler:(id)a0;
- (void)installBlockView:(unsigned long long)a0 paidScene:(long long)a1 paidChannel:(long long)a2;
- (void)updateBlockViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredBlockEventHandlers;
- (id)blockPurchaseButtonView;
- (id)aboveView;
- (long long)insertSubviewIndex;
- (void)uninstall;
- (void).cxx_destruct;
- (id)init;
- (void)clearContent;
- (void)showContent;

@end
