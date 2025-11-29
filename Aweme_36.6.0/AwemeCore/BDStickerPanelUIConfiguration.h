@class BDStickerPanelCategoryUIConfiguration, BDStickerPanelEffectUIConfiguration, NSString;
@protocol RxInjector;

@interface BDStickerPanelUIConfiguration : NSObject <AWEStickerPickerUIConfigurationProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) BDStickerPanelCategoryUIConfiguration *categoryUIConfig;
@property (readonly, nonatomic) BDStickerPanelEffectUIConfiguration *effectUIConfig;
@property (copy, nonatomic) id /* block */ reloadHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)panelLoadingView;
- (id)panelErrorView;
- (BOOL)ignoreCornerRadius;
- (BOOL)ignoreHandleBar;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;

@end
