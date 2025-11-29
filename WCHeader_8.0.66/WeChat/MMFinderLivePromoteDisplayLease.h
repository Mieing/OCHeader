@class MMFinderLivePromoteDisplayLeaseView, NSString, MMFinderLivePromoteDisplayLeaseToken, UIView;
@protocol MMFinderLiveOperationViewDelegate, MMFinderLivePromoteDisplayLeasePromotionDelegate;

@interface MMFinderLivePromoteDisplayLease : NSObject

@property (retain, nonatomic) NSString *leaseId;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLeaseView *leaseView;
@property (retain, nonatomic) MMFinderLivePromoteDisplayLeaseToken *token;
@property (weak, nonatomic) id<MMFinderLivePromoteDisplayLeasePromotionDelegate> promotionDelegate;
@property (weak, nonatomic) id<MMFinderLiveOperationViewDelegate> operationDelegate;
@property (readonly, nonatomic) UIView *leasedDisplayView;

- (id)initWithRequest:(id)a0;
- (id)copyWithWeakToken;
- (void).cxx_destruct;

@end
