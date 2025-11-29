@class NSString, NSMutableArray;
@protocol TextStatePublishLogicDelegate;

@interface TextStatePublishLogic : NSObject <TextStatePublishTaskDeletate>

@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (weak, nonatomic) id<TextStatePublishLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)encodeTaskQueue:(id)a0;
+ (id)decodeTaskQueue;
+ (id)taskQueueFilePath;

- (id)init;
- (void)publishTextState:(id)a0 associateMediaItem:(id)a1 parameter:(id)a2;
- (BOOL)removeTextStateWithId:(id)a0;
- (id)nonNetworkErrorPublishingTextState;
- (void)batchRetryErrorPublishingTextState;
- (id)tempTextStateList;
- (void)checkQueue;
- (void)onTaskUpdate;
- (void)onTaskSuccess:(id)a0;
- (void)onTaskFailure:(id)a0;
- (BOOL)shouldModifySelfContact;
- (void).cxx_destruct;

@end
