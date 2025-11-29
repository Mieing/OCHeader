@class NSNumber, AWEMRSubscribeManageDataContext;

@interface AWEMRSubscribeManageTracker : NSObject

@property (retain, nonatomic) AWEMRSubscribeManageDataContext *dataContext;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) NSNumber *transferBeginTimestamp;
@property (nonatomic) BOOL didTrackPageShow;

+ (id)trackerWithDataContext:(id)a0;

- (void)trackPageShowFromViewDidAppear:(BOOL)a0 transferBeginTimestamp:(id)a1;
- (void)trackPageStayDuration;
- (void).cxx_destruct;

@end
