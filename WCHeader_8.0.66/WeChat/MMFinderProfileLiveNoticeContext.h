@interface MMFinderProfileLiveNoticeContext : NSObject

@property (nonatomic) BOOL showsMoreNoticesAutomatically;
@property (nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically;
@property (readonly, nonatomic) double profileLoadTime;
@property (readonly, nonatomic) BOOL profileHasTakenActions;
@property (readonly, nonatomic) BOOL profileHasCheckedMoreNoticesAutomatically;
@property (readonly, nonatomic) BOOL profileHasShowedMoreNotices;

- (void)recordProfileDidLoad;
- (void)recordProfileDidTakeActions;
- (void)recordProfileDidCheckMoreNoticesAutomatically;
- (void)recordProfileDidShowMoreNotices;
- (BOOL)canShowMoreNoticesAutomatically;

@end
