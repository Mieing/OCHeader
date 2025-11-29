@class NSString, WCFinderPoiGroupBuyView, UIView;
@protocol WCFinderPoiGroupBuyTableViewCellDelegate;

@interface WCFinderPoiGroupBuyTableViewCell : UITableViewCell <WCFinderPoiGroupBuyViewDelegate>

@property (retain, nonatomic) WCFinderPoiGroupBuyView *groupBuyView;
@property (retain, nonatomic) UIView *seperateLine;
@property (weak, nonatomic) id<WCFinderPoiGroupBuyTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForGroupBuyCoupon:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)updateWithGroupBuyCoupon:(id)a0 isLastCell:(BOOL)a1;
- (void)updateLayout:(BOOL)a0;
- (void)groupBuyViewActionButtonDidClick:(id)a0;
- (void).cxx_destruct;

@end
