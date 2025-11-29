@class AWEMRSubscribeManageDetailDataContext, NSNumber;

@interface AWEMRSubscribeManageDetailTracker : NSObject

@property (retain, nonatomic) AWEMRSubscribeManageDetailDataContext *dataContext;
@property (nonatomic) BOOL isViewDidAppear;
@property (copy, nonatomic) NSNumber *transferBeginTimestamp;
@property (nonatomic) BOOL didTrackPageShow;
@property (nonatomic) BOOL didTrackPageClick;

+ (id)trackerWithDataContext:(id)a0;

- (void)trackPageShowFromViewDidAppear:(BOOL)a0 transferBeginTimestamp:(id)a1;
- (void)trackPageClick;
- (void).cxx_destruct;

@end
