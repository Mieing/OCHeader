@class FinderLiveShortcutWordingInfo, NSString, MMFinderLiveTaskId;
@protocol MMFinderLiveQuickCommentLogicDelegate;

@interface MMFinderLiveQuickCommentLogic : NSObject <WCFinderLiveExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveShortcutWordingInfo *shortcutWordingInfo;
@property (nonatomic) unsigned long long lastUpdateASRCommentTimestamp;
@property (weak, nonatomic) id<MMFinderLiveQuickCommentLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtensions;
- (void)dealloc;
- (void)unregisterExtensions;
- (void)delayRemoveASRQuickCommentIfNeeded;
- (void)removeASRQuickCommentAndUpdate;
- (void)updateWithNewShortCutWordingInfo:(id)a0;
- (void)onGetFinderLiveShortcutWordingInfoWithTaskId:(id)a0 shortcutWordingInfo:(id)a1;
- (id)currentLiveTask;
- (unsigned long long)quickCommentMaxShowDuration;
- (unsigned long long)quickCommentMinShowDuration;
- (void).cxx_destruct;

@end
