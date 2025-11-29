@class NSObject, DUXPopover, NSString, UILabel, UIView, UIButton;
@protocol ACCSideslipPropPanelControllerProtocol, ACCSideslipPropPanelListDataProvider, ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelEditorEventDispatchServiceProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelFocusEditorHandleServiceProtocol, OS_dispatch_semaphore;

@interface ACCSideslipPropPanelControllerEditorCancelPlugin : NSObject <ACCSideslipPropServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusEditorHandleServiceProtocol> sideslipPropPanelFocusHandleService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> listDataProvider;
@property (retain, nonatomic) UIView *cancelView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) DUXPopover *popoverView;
@property (nonatomic) BOOL lastFocusUnavailable;
@property (nonatomic) BOOL waitPanelAnimate;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitPanelAnimateSemaphore;
@property (nonatomic) BOOL forbidCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (void)sideslipPropService:(id)a0 didChangeShowState:(unsigned long long)a1;
- (void)controllerViewDidLoad:(id)a0;
- (void)bindFocusCellModel:(id)a0;
- (void)showDebugView;
- (id)nameLabelTextWithDataModel:(id)a0;
- (void)showUnavailablePopoverWithHideCompletion:(id /* block */)a0;
- (id)nameLabelPrefixWithDataModel:(id)a0;
- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)a0;
- (void)setupUI;

@end
