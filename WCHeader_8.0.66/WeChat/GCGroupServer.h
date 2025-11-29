@class NSString, NSMutableSet, GCRecursiveRunTask;

@interface GCGroupServer : GCBaseServer

@property (retain, nonatomic) NSMutableSet *myChatRoomNameSet;
@property (retain, nonatomic) NSString *lastVersion;
@property (retain, nonatomic) NSString *getMoreChatRoomFilter;
@property (retain, nonatomic) NSString *previousMoreChatRoomFilter;
@property (nonatomic) int roomStatusLongPollingSeq;
@property (copy, nonatomic) id /* block */ roomStatusUpdateBlock;
@property (retain, nonatomic) GCRecursiveRunTask *updateGroupTask;

- (id)init;
- (void)getAndUpdateMyChatRoomStatus:(id /* block */)a0;
- (void)requestRoomStatusWithTask:(id)a0;
- (void)onRoomStatueUpdate:(id)a0 delaySeconds:(double *)a1;
- (void)didJoinNewRoom:(id)a0;
- (void)didExitChatRoom:(id)a0;
- (void)getFirstEnterInfoRequest:(id)a0 complectionBlock:(id /* block */)a1;
- (void)getCanJoinGroupWithLocation:(id)a0 complectionBlock:(id /* block */)a1;
- (void)getMoreChatRoom:(id /* block */)a0;
- (void)fakeMoreGetMoreChatRoomResponse:(id)a0;
- (id)recommCellModelFromChatRecInfo:(id)a0;
- (void)onExitRoom;
- (void).cxx_destruct;

@end
