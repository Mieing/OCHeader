@class IESLiveSendSyncStreamInfoAPI, IESLiveGCDTimer, NSMutableArray, NSObject;
@protocol IESLiveRoomService, OS_dispatch_queue;

@interface IESLiveSEISenderIMRequestManager : NSObject {
    long long _sendInterval;
}

@property (retain, nonatomic) NSMutableArray *infoArray;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue;
@property (nonatomic) long long emptyCount;
@property (retain, nonatomic) IESLiveSendSyncStreamInfoAPI *api;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;

- (void)p_stopTimer;
- (void)sendInfo:(id)a0 key:(id)a1;
- (void)p_startTimerWithSeconds:(double)a0;
- (id)popCurrentInfoArray;
- (void)p_requestInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRoom:(id)a0;

@end
