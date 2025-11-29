@class IESLiveActionSheetPresentViewController, NSString, IESLiveImageLabelButton, UIView, UIViewController;
@protocol IESLivePOIProtocol;

@interface IESLiveAudienceLocationFragment : IESLiveRoomComponent <IESLiveAudienceLocationRouter>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) IESLiveImageLabelButton *addLocationBtn;
@property (retain, nonatomic) id<IESLivePOIProtocol> livePOI;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveActionSheetPresentViewController *actionPresentor;
@property (retain, nonatomic) UIViewController *locationManagerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)remoteRoomDataReady:(id)a0;
- (void)userProfileDidShow:(id)a0 poiID:(id)a1;
- (void)userProfileDidClickPOI:(id)a0 poiID:(id)a1;
- (void)p_trackShowOrClick:(BOOL)a0 poiID:(id)a1;
- (void).cxx_destruct;

@end
