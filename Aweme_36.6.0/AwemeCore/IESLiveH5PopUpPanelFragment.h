@class NSString, NSMutableArray;
@protocol IESLiveURLSchemaHandler, IESLiveAudienceRoomAwareness, IESLiveFullScreenWebviewAction, IESLiveInternalRouter;

@interface IESLiveH5PopUpPanelFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveFullScreenWebviewRouter>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSMutableArray *popupViewArray;
@property (nonatomic) BOOL isShowWebview;
@property (retain, nonatomic) id<IESLiveFullScreenWebviewAction> fullScreenWebviewAction;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (nonatomic) BOOL enableCloseLeftScrollGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)p_show;
- (void)p_dealView:(id)a0;
- (void)p_closeDuringDuration;
- (BOOL)isShowFullScreenWebview;
- (void)removeWebview:(long long)a0;
- (void)openPopUpPanelSchema:(id)a0;
- (void)p_removeObjectFromArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
