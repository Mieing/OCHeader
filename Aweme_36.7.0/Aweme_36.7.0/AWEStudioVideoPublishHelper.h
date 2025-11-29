@class AWEVideoPublishViewModel, AWEPublishBaseTask;

@interface AWEStudioVideoPublishHelper : NSObject

@property (copy, nonatomic) id /* block */ startPublishBlock;
@property (copy, nonatomic) id /* block */ endPublishBlock;
@property (retain, nonatomic) AWEPublishBaseTask *taskV2;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (void)configPublishViewModel:(id)a0;

- (void)publishStory;
- (void)enqueuePublishTask;
- (id)initWithTaskV2:(id)a0;
- (void)publishWithCompletion:(id /* block */)a0;
- (void)p_publishIfNeeded;
- (void)enqueuePublishStoryTask;
- (void)excuteTask;
- (void)p_publish;
- (id)initWithStartPublishBlock:(id /* block */)a0 endPublishBlock:(id /* block */)a1;
- (id)initWithTaskV2:(id)a0 StartPublishBlock:(id /* block */)a1 endPublishBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
