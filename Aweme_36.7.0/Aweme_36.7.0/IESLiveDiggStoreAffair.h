@class NSString, NSTimer, IESLiveComponentContext, HTSLiveDiggAPI, NSNumber;
@protocol IESLiveRoomService, HTSLiveDiggAction, HTSLiveDiggReaction;

@interface IESLiveDiggStoreAffair : NSObject <IESLiveDiggStoreAffairProtocol>

@property (retain, nonatomic) HTSLiveDiggAPI *diggAPI;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL isDigging;
@property (retain, nonatomic) NSTimer *diggingTimer;
@property (nonatomic) long long currentContinueCount;
@property (nonatomic) long long doubleContinueCount;
@property (retain, nonatomic) id<HTSLiveDiggAction> actionCreator;
@property (weak, nonatomic) id<HTSLiveDiggReaction> reaction;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) NSNumber *firstIndex;
@property (nonatomic) BOOL isDoubleDigging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWitRoom:(id)a0;
- (void)realUploadDiggMessageWithIndex:(id)a0 duration:(long long)a1 diggcount:(long long)a2;
- (void)diggClicked:(BOOL)a0 touchPoint:(struct CGPoint { double x0; double x1; })a1 gapTime:(double)a2 shouldHandleDiggMessage:(BOOL)a3 currentDigg:(long long *)a4;
- (long long)continueDiggCount;
- (void)d_diggClickedWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 currentDigg:(long long *)a1 shouldHandleDiggMessage:(BOOL)a2;
- (void)continueDiggDidEnd;
- (void)fakeLikeMessageWithCount:(long long)a0 pattern:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
