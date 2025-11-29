@class NSObject, NSMutableDictionary, IESLiveGCDTimer;
@protocol OS_dispatch_queue;

@interface IESLiveKTVDownloaderV2 : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskHolder;
@property (retain, nonatomic) IESLiveGCDTimer *checkTimeOutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)stopCheckTimeOut;
- (void)startCheckTimeOutIfNeed;
- (void)checkTaskTimeOut;
- (id)getTimeOutErrorWithEvent:(id)a0 url:(id)a1;
- (void)downloadFileWithUrl:(id)a0 key:(id)a1 progress:(id /* block */)a2 localPath:(id)a3 useCache:(BOOL)a4 timeoutSecond:(int)a5 completion:(id /* block */)a6;
- (id)downloadFileWithUrlSync:(id)a0 key:(id)a1 progress:(id /* block */)a2 localPath:(id)a3 useCache:(BOOL)a4 timeoutSecond:(int)a5;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
