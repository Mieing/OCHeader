@class NSString, MMFinderLiveCouponItem;

@interface MMFinderLiveCouponWithNoticeCellViewModel : NSObject <MMFinderLiveCouponCellViewModel>

@property (retain, nonatomic) MMFinderLiveCouponItem *coupon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needActionButton;
- (void).cxx_destruct;

@end
