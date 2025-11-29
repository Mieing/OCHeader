@class AWEGDCommentView, AWEGDSuperDiscountView, AWEGDImagePointModel, NSString, AWEGDDishView, AWEGDMarqueView;

@interface AWEGDPointCell : UIView <AWEGDImagePointProtocol>

@property (retain, nonatomic) AWEGDMarqueView *marqueeView;
@property (retain, nonatomic) AWEGDDishView *dishView;
@property (retain, nonatomic) AWEGDCommentView *commentView;
@property (retain, nonatomic) AWEGDSuperDiscountView *superDiscountView;
@property (retain, nonatomic) AWEGDImagePointModel *cellData;
@property (nonatomic) long long currentPointType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellWillShow;
- (struct CGPoint { double x0; double x1; })calculateContainerPosition;
- (struct CGSize { double x0; double x1; })calculateContainerSize;
- (void)addMarqueeView;
- (void)addCommentView;
- (void)addDishView;
- (void)addSuperDiscountView;
- (id)targetPointCell;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
