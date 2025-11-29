@class HTSLiveEpisode, HTSEventContext, IESLivePlaybackComponentContext, RACSubject, NSString;
@protocol IESLivePlaybackDanmakuActions;

@interface IESLivePlaybackDanmakuStore : NSObject <HTSLiveMessageSubscriber, IESVSMessageSubscriber, IESLivePlaybackDanmakuStoreProtocol>

@property (retain, nonatomic) HTSLiveEpisode *itemRoomModel;
@property (retain, nonatomic) id<IESLivePlaybackDanmakuActions> danmakuActions;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) RACSubject *danmakuAuthChange;
@property (nonatomic) BOOL danmakuAuthEnabled;
@property (nonatomic) BOOL enableWelcomeMsg;
@property (readonly, nonatomic) BOOL portraitEpisode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (BOOL)convergedModule;
- (void)messageReceived:(id)a0 source:(id)a1;
- (void)cleanMessageWithSeekByUser;
- (void)updateVideoRoom:(id)a0;
- (void)trackDanmakuShowWithNode:(id)a0;
- (void)trackDanmakuClickWithNode:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithComponentContext:(id)a0;

@end
