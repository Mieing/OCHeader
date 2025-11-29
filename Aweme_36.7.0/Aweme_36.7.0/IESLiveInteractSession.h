@class NSString, IESLiveInteractSessionView, IESLiveLinkRTCInteractSession;

@interface IESLiveInteractSession : NSObject <IESLiveLinkmicSession>

@property (nonatomic) BOOL isAudio;
@property (nonatomic) BOOL isHost;
@property (copy, nonatomic) NSString *identifier;
@property BOOL retainLastVideoFrame;
@property (retain, nonatomic) IESLiveInteractSessionView *view;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (copy, nonatomic) NSString *strUID;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long streamIndex;
@property (copy, nonatomic) NSString *wtnStreamID;
@property (nonatomic) BOOL needRender;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL hasRendered;
@property (nonatomic) BOOL isLocalSmallWindow;
@property (nonatomic) BOOL isFromRoomEx;
@property (nonatomic) BOOL isFromRoomEx2;
@property (copy, nonatomic) NSString *mixStreamTaskID;
@property (weak, nonatomic) IESLiveLinkRTCInteractSession *liveLinkRTCSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getRenderView;
- (id)initWithStrUid:(id)a0;
- (id)sessionView;
- (void).cxx_destruct;
- (id)sessionUID;
- (id)renderView;
- (id)streamKey;

@end
