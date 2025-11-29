@class HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface AWELiveWebShareHelper : NSObject <IESLiveShareActions>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)processWebShareWithParam:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)sharePanelDidDismiss;
- (void)shareFinishedWithResult:(id)a0;
- (void)processH5ShareWithParams:(id)a0 completion:(id /* block */)a1;
- (void)processLiveShareWithParams:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)callbackWithCode:(long long)a0 dict:(id)a1 message:(id)a2;
- (void)openImBoardWithParams:(id)a0 model:(id)a1;
- (void)shareToPlatformWithParams:(id)a0 model:(id)a1;
- (void)openSharePanelWithParams:(id)a0 model:(id)a1;
- (long long)getShareTypeWithPlatform:(id)a0;
- (void)showSharePanelWithContentModel:(id)a0;
- (id)getPosterActivityImageArray:(id)a0;
- (void).cxx_destruct;

@end
