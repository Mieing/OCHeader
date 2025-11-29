@class MMFinderLiveCouponItem, NSString, MMFinderLiveTaskId;

@interface MMFinderLiveShopShelfCouponViewModel : NSObject <MMFinderLiveCouponCellViewModel>

@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (retain, nonatomic) MMFinderLiveCouponItem *coupon;
@property (readonly, nonatomic) BOOL needActionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskID:(id)a0 coupon:(id)a1;
- (void).cxx_destruct;

@end
