@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BDPCanvasManager : NSObject <BDPApplicationNotificationMessage> {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_canvasApps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)canvasInstanceType:(long long)a0 WithUniqueID:(id)a1;
+ (id)sharedManager;

- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (void)stopAndRemoveCanvasInstanceWithUniqueID:(id)a0;
- (id)getCanvasInstanceWithUniqueID:(id)a0;
- (void)addCanvasInstance:(id)a0 withUniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
