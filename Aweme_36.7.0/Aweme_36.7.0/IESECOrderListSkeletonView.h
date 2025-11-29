@class IESECOrderListBodySkeletonView, UIImageView, UIView, UIButton;

@interface IESECOrderListSkeletonView : UIView

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *searchHeaderView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *tabView;
@property (retain, nonatomic) IESECOrderListBodySkeletonView *bodyView;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) id /* block */ backBlock;

- (id)initWithType:(unsigned long long)a0 backActionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
