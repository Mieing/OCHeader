@class NSObject, NSMutableDictionary, NSString, EcTaskStatus, NSMutableArray, EcClient;
@protocol OS_dispatch_group, OS_dispatch_queue, EcTaskChangeProtocol;

@interface EcDownloadTaskModel : NSObject

@property (weak, nonatomic) EcClient *client;
@property (retain, nonatomic) NSMutableArray *downloadItems;
@property (retain, nonatomic) NSMutableArray *failedItems;
@property (retain, nonatomic) NSMutableArray *successItems;
@property (retain, nonatomic) NSMutableDictionary *progressItems;
@property (retain, nonatomic) NSMutableDictionary *downloadBegin;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *taskGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (copy, nonatomic) id /* block */ complete;
@property (nonatomic) long long state;
@property (retain, nonatomic) EcTaskStatus *taskStatus;
@property (retain, nonatomic) NSMutableArray *uniformAssets;
@property (nonatomic) unsigned long long tagId;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *downloadFolder;
@property (weak, nonatomic) id<EcTaskChangeProtocol> taskChangeDelegte;

- (id)initWithUniformAssets:(id)a0 tagId:(unsigned long long)a1 taskKey:(id)a2 downloadFolder:(id)a3 delegate:(id)a4 client:(id)a5 complete:(id /* block */)a6;
- (void)postTaskProgress:(id)a0;
- (void)taskItemComplete:(id)a0;
- (void)waitTaskDone;
- (void)postTaskItemDone:(id)a0;
- (void)postTaskStateChange;
- (id)currentTaskStatus;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)currentProgress;
- (void)retry;

@end
