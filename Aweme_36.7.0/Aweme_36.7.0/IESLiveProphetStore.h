@class NSString, IESLiveProphetApi, HTSLiveQuizBeginMessage;
@protocol IESLiveRoomService;

@interface IESLiveProphetStore : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) HTSLiveQuizBeginMessage *quizBeginMessage;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveProphetApi *api;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ quizBeginMessageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)a0 componentContext:(id)a1;
- (BOOL)enableProphet;
- (BOOL)liveAnchorProphetEntranceJumpOpt;
- (void)prepareStartProphet:(BOOL)a0 enterFrom:(long long)a1 withCompletion:(id /* block */)a2;
- (void)prepareStartProphet:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)prophetSettingConfig;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
