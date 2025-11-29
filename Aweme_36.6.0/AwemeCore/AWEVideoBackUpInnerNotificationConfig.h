@interface AWEVideoBackUpInnerNotificationConfig : DUXInAppNotificationConfig

@property (copy, nonatomic) id /* block */ editDraftBlock;
@property (copy, nonatomic) id /* block */ saveDraftBlock;
@property (copy, nonatomic) id /* block */ cleanBackUpBlock;
@property (nonatomic) BOOL saveDraft;
@property (nonatomic) double dismissTimerInterval;
@property (nonatomic) BOOL disablePullIndicatorView;

- (void).cxx_destruct;

@end
