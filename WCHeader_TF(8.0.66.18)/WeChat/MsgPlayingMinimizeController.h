@class NSString, MinimizeTaskData;
@protocol MsgPlayingMinimizeControllerDelegate;

@interface MsgPlayingMinimizeController : NSObject <IMinimizeTaskDelegateInterface>

@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (readonly, nonatomic) BOOL isShowingMinimizeView;
@property (weak, nonatomic) id<MsgPlayingMinimizeControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initMinimizeViewWithMsg:(id)a0;
- (void)updateMinimizeViewWithMsg:(id)a0;
- (void)foldMinimizeView;
- (void)removeMinimizeView;
- (struct CGSize { double x0; double x1; })minimizeViewSize;
- (void)stopAnimating;
- (void)onOutContentTask:(id)a0 replacedByAnotherTaskData:(id)a1;
- (void)onRemoveMinimizedTask:(id)a0;
- (void)onMinimizedTaskItemExposed:(id)a0;
- (void).cxx_destruct;

@end
