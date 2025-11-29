@class NSString, AWEIMCouponListViewModel, NSDictionary;

@interface AWEIMJoinGroupGetGiftsViewModel : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) AWEIMCouponListViewModel *couponListViewModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL didTrackShow;
@property (nonatomic) BOOL showErrorPage;
@property (readonly, copy, nonatomic) NSString *emptyDescribeText;
@property (readonly, copy, nonatomic) NSString *emptyTransferText;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (id)initWithExtraParams:(id)a0;
- (void)didCkickedEmptyTransferButton;
- (void)didClickedCouponFunctionButtonWithItemViewModel:(id)a0 completion:(id /* block */)a1;
- (void)__confirmTrackerWithClickType:(id)a0;
- (void)__showTracker;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
