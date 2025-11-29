@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BDVideoUploadEventManagerProtocol;

@interface BDVideoUploadEventManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (nonatomic) BOOL canShowLog;
@property (nonatomic) long long uploadLogType;
@property (weak, nonatomic) id<BDVideoUploadEventManagerProtocol> delegate;

+ (id)dictionaryToJson:(id)a0;
+ (void)event:(id)a0 params:(id)a1;
+ (void)configureAppInfo:(id)a0;
+ (id)sharedManager;

- (id)popAllEvents;
- (void)showLog:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addEvent:(id)a0;

@end
