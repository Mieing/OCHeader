@interface MMFinderLivePromoteDisplayLeaseRequest : NSObject <NSCopying>

@property (nonatomic) unsigned long long priority;
@property (nonatomic) double duration;
@property (nonatomic) BOOL dismissCurrentPromotion;
@property (nonatomic) BOOL relinquishUponUpcomingPromotion;
@property (nonatomic) BOOL userDismissable;
@property (retain, nonatomic) id userInfo;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
