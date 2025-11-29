@class AWEPickPanelViewController, NSString;

@interface AWEPlayInteractionPickPanelController : AWEPlayInteractionNewBaseController <AWEPickPanelManagerDelegate, AWEPlayInteractionPanelControllerProtocol, AWEPlayInteractionPickPanelControllerProtocol>

@property (retain, nonatomic) AWEPickPanelViewController *pickPanelViewController;
@property (nonatomic) BOOL panelHasShowed;
@property (nonatomic) long long pickCount;
@property (copy, nonatomic) id /* block */ onDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (BOOL)isPanelShowed;
- (void)pickPanelPartialSheetDismiss;
- (void)pickPanelPartialSheetDidDragUp:(double)a0;
- (void)pickPanelPartialSheetPanProgress:(double)a0;
- (void)pickPanelPartialSheetDidDismiss;
- (void)pickPanelPartialSheetShowWithItemID:(id)a0 params:(id)a1;
- (void)updatePickQuota:(long long)a0 success:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
