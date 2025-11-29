@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveRoomDataCenterService : NSObject {
    void *_queueKey;
}

@property (retain, nonatomic) NSMapTable *roomMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void)cacheRoom:(id)a0;
- (id)roomForID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
