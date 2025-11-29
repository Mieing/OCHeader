@class IESLiveRecordStateApi;
@protocol IESLiveAnchorRoomStatusChangeEvents, IESLiveRoomService;

@interface HTSLivMediaPreviewRoomStatusManager : NSObject

@property (retain, nonatomic) IESLiveRecordStateApi *stateApi;
@property (retain, nonatomic) id<IESLiveAnchorRoomStatusChangeEvents> dispatcher;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)stopLiveByForce:(BOOL)a0 reason:(long long)a1 trace:(id)a2 completion:(id /* block */)a3;
- (void)updateRemoteRoomStatus:(long long)a0 reason:(long long)a1 source:(unsigned long long)a2 trace:(id)a3;
- (void).cxx_destruct;

@end
