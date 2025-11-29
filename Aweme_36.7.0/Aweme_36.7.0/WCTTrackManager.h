@class NSDictionary, NSMutableDictionary, NSObject;
@protocol WCTTrackProtocol, OS_dispatch_queue;

@interface WCTTrackManager : NSObject

@property (weak, nonatomic) id<WCTTrackProtocol> trackService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (copy, nonatomic) NSDictionary *cacheEvents;
@property (nonatomic) BOOL enableTrack;
@property (retain, nonatomic) NSMutableDictionary *dbErrorDict;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (BOOL)crudCanTrack;
- (void)errorCanTrackWithDBTag:(int)a0 path:(id)a1 errorCode:(int)a2 block:(id /* block */)a3;
- (void)injectTrackService:(id)a0;
- (double)p_randFrom0To1;
- (BOOL)defaultCanTrack;
- (void).cxx_destruct;
- (id)init;

@end
