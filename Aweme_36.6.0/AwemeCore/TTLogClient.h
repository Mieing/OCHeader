@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTLogClient : NSObject {
    NSMutableDictionary *cache;
    BOOL uploading;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendingQueue;
@property (nonatomic) BOOL enable;

+ (id)shareInstance;

- (void)loginETWithScheme:(id)a0;
- (void)uploadIfNeed;
- (void)logEvent:(id)a0 response:(id)a1;
- (void)sendETWithEvent:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
