@interface AWEHPSideBarEntranceTouchSessionTracker : NSObject

@property (nonatomic) double touchesBeganTimestamp;
@property (nonatomic) BOOL isTapFailed;
@property (nonatomic) BOOL isPrefetchSideBarDataTriggered;
@property (nonatomic) BOOL requestSideBarDataResult;
@property (nonatomic) BOOL hasTrackTapFailedEvent;
@property (nonatomic) BOOL hasTrackDurationEvent;

- (void)touchesBegan;
- (void)p_trackTapFailedIfNeeded;
- (void)p_trackDurationIfNeeded;
- (void)tapFailed;
- (void)prefetchSideBarDataTriggered;
- (void)sideBarDataRequestCompletedWithResult:(BOOL)a0;

@end
