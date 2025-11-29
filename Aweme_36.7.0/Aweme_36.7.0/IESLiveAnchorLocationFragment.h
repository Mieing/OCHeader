@class IESLiveActionSheetPresentViewController, NSString, IESLiveImageLabelButton, IESLiveUpdateRoomInfoApi, UIViewController;
@protocol IESLivePOIProtocol;

@interface IESLiveAnchorLocationFragment : IESLiveRoomComponent <IESLiveAnchorLocationRouter, HTSLiveToolbarActions>

@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) IESLiveImageLabelButton *addLocationBtn;
@property (retain, nonatomic) id<IESLivePOIProtocol> livePOI;
@property (nonatomic) BOOL firstTimeShowLocationManager;
@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (retain, nonatomic) UIViewController *locationManagerVC;
@property (retain, nonatomic) IESLiveUpdateRoomInfoApi *roomInfoApi;
@property (retain, nonatomic) NSString *poiDetailInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)onToolbar:(id)a0 sizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExpandGroupShow:(BOOL)a0;
- (BOOL)enableToolbarNewStyle;
- (void)userProfileDidShow:(id)a0 poiID:(id)a1;
- (void)userProfileDidClickPOI:(id)a0 poiID:(id)a1;
- (void)userProfileDidClickPOIDetail:(id)a0 poiID:(id)a1;
- (void)userProfileDidChangePOIInfo:(id)a0 poiName:(id)a1;
- (void)addAddLocationItem;
- (void)showLocationPanel;
- (void)p_trackShowOrClick:(BOOL)a0 poiID:(id)a1;
- (void)showAnchorUserCard;
- (void)showLocationDetailPanel;
- (void).cxx_destruct;
- (void)setupActions;

@end
