@class AWEIMTaskCardListCellItem, AWEIMTaskPlatformContext, NSString, UILabel, UIView;

@interface AWEIMTaskNaviBarItemCell : UICollectionViewCell <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIView *unreadDotView;
@property (retain, nonatomic) UILabel *unreadLabel;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *model;
@property (retain, nonatomic) AWEIMTaskPlatformContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__addSubviews;
- (id)convertUnreadCountToAttrString:(long long)a0;
- (void)__updateUnreadView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
