@class RTVStickerPanelEffectTargetChooserView, RTVStickerPanelEffectOtherDataController, NSString;
@protocol RTVStickerPanelEffectTargetChooserDelegate, RxInjector, RTVStickerPanelDataControllerInterface;

@interface RTVStickerPanelEffectTargetChooser : NSObject <RTVStickerPannelControllerDelegate, RTVStickerPanelEffectTargetChooserViewDelegate, RTVStickerPanelEffectOtherDataControllerDelegate, RTVStickerPanelPluginInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RTVStickerPanelEffectTargetChooserView *pluginView;
@property (weak, nonatomic) id<RTVStickerPanelDataControllerInterface> dataController;
@property (retain, nonatomic) RTVStickerPanelEffectOtherDataController *effectOtherDataController;
@property (weak, nonatomic) id<RTVStickerPanelEffectTargetChooserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)stickerPickerController:(id)a0 shouldSelectSticker:(id)a1;
- (long long)respondToDelegateSelector:(SEL)a0;
- (void)stickerPickerController:(id)a0 willDeselectSticker:(id)a1 forDataController:(id)a2;
- (void)stickerPickerController:(id)a0 willSelectSticker:(id)a1 forDataController:(id)a2;
- (id)willSelectSticker:(id)a0;
- (void)stickerPickerController:(id)a0 didSelectSticker:(id)a1 forDataController:(id)a2;
- (void)stickerPickerController:(id)a0 didDeselectSticker:(id)a1 forDataController:(id)a2;
- (void)__activateDataController:(id)a0;
- (BOOL)effectTargetChooserView:(id)a0 isEnableSwitchTarget:(long long)a1;
- (void)effectTargetChooserView:(id)a0 switchToTarget:(long long)a1;
- (BOOL)effectTargetIsSelf;
- (void).cxx_destruct;

@end
