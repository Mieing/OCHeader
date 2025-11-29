@class Protocol;

@interface IESLiveRoomDI : IESLiveDI {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rw_lock;
}

@property (weak, nonatomic) id roomService;
@property (retain, nonatomic) Protocol *roomServiceProtocol;

- (id)cacheObjectWithProtocol:(id)a0;
- (id)getRoomService;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;

@end
