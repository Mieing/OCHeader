@class NSString, NSDictionary, AWEVideoPublishViewModel, UIViewController;
@protocol ACCAIGCShowAsyncQueueViewDelegate, AWEASyncQueueViewControllerProtocol;

@interface ACCAIGCShowAsyncQueueViewContext : NSObject

@property (retain, nonatomic) UIViewController<AWEASyncQueueViewControllerProtocol> *queueVC;
@property (nonatomic) BOOL isQueueVCIsShowing;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) unsigned long long entrance;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) long long currentTaskType;
@property (retain, nonatomic) NSString *currentTaskID;
@property (weak, nonatomic) id<ACCAIGCShowAsyncQueueViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (copy, nonatomic) id /* block */ enterBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ reopenBlock;
@property (nonatomic) BOOL isFromCreateRole;
@property (nonatomic) BOOL isTaskFailedByKeyWords;

- (id)commonTrack;
- (void)addSnapFakeViewON:(id)a0 withDelay:(double)a1;
- (BOOL)isAsyncQueueIsDisplay;
- (void)updateQueueTaskType:(long long)a0 statusLabel:(id)a1 subTitleText:(id)a2 bottomText:(id)a3 failedType:(long long)a4 waitTime:(double)a5;
- (void)updateQueueTaskType:(long long)a0 statusLabel:(id)a1 subTitleText:(id)a2 bottomText:(id)a3 failedType:(long long)a4 waitTime:(double)a5 withfailText:(id)a6;
- (void)resetPublishViewModel;
- (void)updateCurrentPageTaskId:(id)a0 taskType:(long long)a1;
- (void)resetAsyncPageShowStatus;
- (void)showAsyncQueueView:(unsigned long long)a0 publishViewModel:(id)a1 supportUnifyAIGCEditLoading:(BOOL)a2;
- (void)updateOrignImageViewWithImage:(id)a0;
- (void)handleAsyncQueueGroupId;
- (void)dismissQueueVC:(id /* block */)a0;
- (void)sendAigcQueueFailedWithType:(long long)a0 statusCode:(long long)a1;
- (void).cxx_destruct;

@end
