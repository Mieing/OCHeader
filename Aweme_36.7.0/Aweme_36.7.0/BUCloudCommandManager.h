@class NSMutableDictionary, NSOperationQueue, NSObject, BUCloudCommandConfig;
@protocol OS_dispatch_queue;

@interface BUCloudCommandManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *commandExecutionQueue;
@property (retain, nonatomic) NSMutableDictionary *commandIDDic;
@property (retain, nonatomic) BUCloudCommandConfig *config;

+ (id)sharedInstance;

- (void)executeCommandWithData:(id)a0 ran:(id)a1;
- (void)_executeCommand:(id)a0;
- (void)_postCommandResponse:(id)a0;
- (id)_paramDictionaryWithResult:(id)a0;
- (void)fetchCloudCommand;
- (void).cxx_destruct;
- (id)init;
- (id)host;

@end
