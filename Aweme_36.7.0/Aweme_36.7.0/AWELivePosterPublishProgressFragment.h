@class AWELivePosterPublishProgressView, NSString;

@interface AWELivePosterPublishProgressFragment : IESLiveRoomComponent <AWEPublishTaskMessage>

@property (retain, nonatomic) AWELivePosterPublishProgressView *progressView;
@property (retain, nonatomic) NSString *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isBusinessLiveRoomWithRoom:(id)a0;

- (void)task:(id)a0 didAppendWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 progressDidChangeWithInfo:(id)a1;
- (void)componentCreate;
- (void)componentMount;
- (void)publishTaskId:(id)a0;
- (BOOL)isCurrentPublishTaskWithTask:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
