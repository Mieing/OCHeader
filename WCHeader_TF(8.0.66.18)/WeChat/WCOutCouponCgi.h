@protocol WCOutCouponCgiDelegate;

@interface WCOutCouponCgi : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventID;
@property (weak, nonatomic) id<WCOutCouponCgiDelegate> delegate;

+ (id)CGIWithDelegate:(id)a0;

- (void)dealloc;
- (void)start:(unsigned int)a0;
- (void)fail;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
