@class IESLiveLinkRTCEngineManager, NSMutableDictionary, NSString, IESLiveLinkMultiCaster;
@protocol IESLiveLinkReporterProtocol;

@interface IESLiveLinkRTCRoomManager : NSObject <ByteRTCRoomDelegate, ByteRTCRoomDelegateEx> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (retain, nonatomic) NSMutableDictionary *rooms;
@property (retain, nonatomic) NSMutableDictionary *roomObservers;
@property (retain, nonatomic) NSMutableDictionary *roomObserversEx;
@property (retain, nonatomic) IESLiveLinkMultiCaster *observers;
@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> liveLinkReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)roomCount;
- (id)initWithEngineManager:(id)a0;
- (id)roomWithRoomId:(id)a0;
- (void)setUserVisibilityForAll:(BOOL)a0;
- (BOOL)isRoomExisted:(id)a0;
- (id)allRoomID;
- (void)addRoomObserver:(id)a0 roomId:(id)a1;
- (void)addRoomObserverEx:(id)a0 roomId:(id)a1;
- (void)destroyRoomWithRoomId:(id)a0;
- (id)createRoomWithRoomId:(id)a0;
- (void)removeRoomObserver:(id)a0 roomId:(id)a1;
- (void)notifyRoomCreated:(BOOL)a0 roomID:(id)a1;
- (void)notifyRoomWillDestroy:(id)a0;
- (void)notifyRoomDidDestroy:(id)a0;
- (void)removeRoomObserverEx:(id)a0 roomId:(id)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
