@class NSNumber, NSString;
@protocol RxInjector, RTVSettingsManager;

@interface BDStickerPanelEffectUIConfiguration : NSObject <AWEStickerPickerEffectUIConfigurationProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) NSNumber *heightGroup;
@property (copy, nonatomic) id /* block */ reloadHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)effectListViewBackgroundColor;
- (double)effectListViewHeight;
- (Class)stickerItemCellClass;
- (id)stickerListViewLayout;
- (id)effectListLoadingView;
- (id)effectListErrorView;
- (id)effectListEmptyView;
- (double)contentInsetBottomForShootButton;
- (BOOL)errorContainerViewDisableTapGesture;
- (int)__stickerPanelGroup;
- (void).cxx_destruct;

@end
