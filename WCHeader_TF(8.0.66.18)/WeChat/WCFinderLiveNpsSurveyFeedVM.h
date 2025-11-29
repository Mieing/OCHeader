@class MMLiveQcPollQuestion, MMLiveQcPoll, MMLiveQcPollActivityFeed;
@protocol WCFinderLiveNpsSurveyFeedVMDelegate;

@interface WCFinderLiveNpsSurveyFeedVM : WCFinderLiveGenericFeedVM

@property (weak, nonatomic) id<WCFinderLiveNpsSurveyFeedVMDelegate> delegate;
@property (nonatomic) unsigned long long selectOptionIndex;
@property (retain, nonatomic) MMLiveQcPoll *qcPollInfo;
@property (retain, nonatomic) MMLiveQcPollActivityFeed *activityFeed;
@property (readonly, nonatomic) MMLiveQcPollQuestion *leadingQuestion;

- (id)initWithModel:(id)a0 scene:(int)a1 sessionExtraKey:(id)a2 containerId:(unsigned long long)a3 ctx:(id)a4;
- (void)commitActivity;
- (void)resetActivity;
- (id)customElementReportDict:(unsigned long long)a0;
- (void).cxx_destruct;

@end
