@class NSString, MMFinderLivePromoteDisplayLeaseRequest;
@protocol MMFinderLivePromoteDisplayLeaseTokenDelegate, MMFinderLiveOperationViewDelegate, MMFinderLivePromoteDisplayLeasePromotionDelegate;

@interface MMFinderLivePromoteDisplayLeaseToken : NSObject

@property (retain, nonatomic) NSString *leaseId;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLeaseRequest *request;
@property (nonatomic) double leaseBeginUnixEpochTime;
@property (nonatomic) BOOL invalidated;
@property (weak, nonatomic) id<MMFinderLiveOperationViewDelegate> operationDelegate;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL dismissCurrentPromotion;
@property (readonly, nonatomic) BOOL relinquishUponUpcomingPromotion;
@property (readonly, nonatomic) BOOL userDismissable;
@property (weak, nonatomic) id<MMFinderLivePromoteDisplayLeasePromotionDelegate> promotionDelegate;
@property (readonly, nonatomic) double leaseDuration;
@property (readonly, nonatomic) id userInfo;
@property (weak, nonatomic) id<MMFinderLivePromoteDisplayLeaseTokenDelegate> delegate;

- (id)initWithId:(id)a0 request:(id)a1;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)relinquishLease;
- (void)notifyViewAttached;
- (void)notifyViewDetaching;
- (void)notifyInvalidationForReason:(unsigned long long)a0;
- (void)leaseTimeout;
- (void).cxx_destruct;

@end
