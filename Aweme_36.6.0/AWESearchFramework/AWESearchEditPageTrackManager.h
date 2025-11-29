@class NSDictionary, NSMutableDictionary;

@interface AWESearchEditPageTrackManager : NSObject

@property (copy, nonatomic) NSDictionary *initialParams;
@property (readonly, copy, nonatomic) NSDictionary *commonTrackerParams;
@property (readonly, copy, nonatomic) NSDictionary *bizTrackerParams;
@property (retain, nonatomic) NSMutableDictionary *performanceTrackerDict;

+ (id)searchAIGCPostLongImageTextConfig;
+ (id)editPageClickButtonNameFrom:(unsigned long long)a0;
+ (id)leaveEditPageMethodNameFrom:(unsigned long long)a0;
+ (BOOL)searchAIGCEnableLongImageTextPublishMonitor;

- (void)trackEventOfName:(id)a0;
- (void)trackStatusOfName:(id)a0 status:(BOOL)a1;
- (void)trackInfoOfName:(id)a0 count:(id)a1;
- (void)trackStatusIfNeededWithEvent:(id)a0;
- (void)calculateDurationOfName:(id)a0 withStartEventName:(id)a1 endEventName:(id)a2;
- (void)trackLongArticleEditPageEnter;
- (void)trackLongArticleEditPageLoadCompletedWithSucceeded:(BOOL)a0 failureReason:(id)a1 loadDuration:(double)a2;
- (void)trackLongArticleEditPageClickWithButtonType:(unsigned long long)a0 textNumber:(unsigned long long)a1;
- (void)trackLongArticleEditPageLeaveWithMethodType:(unsigned long long)a0 duration:(double)a1 textNumber:(unsigned long long)a2;
- (void)endTrackWithEventName:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
