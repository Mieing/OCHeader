@class NSString, MMLiveTaskId, MMLiveFeedStreamTask;

@interface MMFinderLiveFeedStreamWidgetBaseView : UIView

@property (nonatomic) BOOL isExposing;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveFeedStreamTask *liveTask;
@property (readonly, nonatomic) NSString *reportWording;

- (void)prepareForReuse;
- (void)startExposeAction;
- (void)endExposeAction;
- (void).cxx_destruct;

@end
