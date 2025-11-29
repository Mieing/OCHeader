@class NSArray, ACCPublishSaveLocalServiceConfig, ACCPublishSaveLocalTask, NSString;

@interface ACCPublishSaveLocalBatchTask : NSObject <ACCPublishSaveLocalBatchTask>

@property (retain, nonatomic) NSArray *draftIDs;
@property (nonatomic) long long finishedCount;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) ACCPublishSaveLocalServiceConfig *config;
@property (retain, nonatomic) ACCPublishSaveLocalTask *task;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startNext;
- (void)p_handleResult:(id)a0;
- (void)p_handleCurrentProgress:(double)a0;
- (id)initWithDraftIDs:(id)a0 config:(id)a1 progressBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)startTask:(id)a0;

@end
