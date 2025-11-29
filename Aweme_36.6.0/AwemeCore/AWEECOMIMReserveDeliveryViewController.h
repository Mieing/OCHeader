@class UIView, NSString, NSArray, AWEECOMIMShopOrderCalendarItem, UIButton, UICollectionView, AWEECOMIMReserveDeliveryNavBar, NSNumber, UILabel;

@interface AWEECOMIMReserveDeliveryViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEECOMIMReserveDeliveryNavBar *headerBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *confirmPanel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) NSNumber *shopId;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) NSArray *availableDateList;
@property (retain, nonatomic) AWEECOMIMShopOrderCalendarItem *selectItem;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)closePage;
- (void)fetchShopOrderCalendar;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)confirm;

@end
