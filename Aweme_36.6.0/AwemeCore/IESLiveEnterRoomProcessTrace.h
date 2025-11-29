@class IESLiveLeaveRoomStatInfo, NSMutableDictionary, IESLiveEnterRoomProcessItem;
@protocol HTSKVStore;

@interface IESLiveEnterRoomProcessTrace : NSObject

@property (retain, nonatomic) NSMutableDictionary *items;
@property (retain, nonatomic) IESLiveEnterRoomProcessItem *currentProcessItem;
@property (retain, nonatomic) id<HTSKVStore> trackKVStore;
@property (retain, nonatomic) IESLiveLeaveRoomStatInfo *leaveRoomStatInfo;

- (void)recordFirstFrameRenderWithRoom:(id)a0 firstFrame:(BOOL)a1 extra:(id)a2;
- (void)recordRoom:(id)a0 roomInfoBlock:(id /* block */)a1;
- (void)recordRoom:(id)a0 stage:(unsigned long long)a1 duration:(double)a2;
- (void)reportExitRoom:(id)a0 clearAll:(BOOL)a1;
- (void)traceStartPullStream:(id)a0;
- (void)recordRoom:(id)a0 watchDuration:(double)a1;
- (void)recordRoom:(id)a0 extra:(id)a1;
- (void)enterFailRoom:(id)a0 exceptionType:(unsigned long long)a1 extra:(id)a2;
- (void)closeRoom:(id)a0 manualType:(unsigned long long)a1 exceptionType:(unsigned long long)a2 extra:(id)a3;
- (void)traceStartEnterRoom:(id)a0;
- (void)updateRoomProcessRecord:(id)a0;
- (id)itemWithIndex:(id)a0 needCreate:(BOOL)a1;
- (void)checkLastLeaveRoom;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
