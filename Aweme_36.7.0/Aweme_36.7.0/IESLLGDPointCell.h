@class IESLLGDCommentView, IESLLGDMarqueView, IESLLGDSuperDiscountView, IESLLGDImagePointModel, NSString, IESLLGDDishView;

@interface IESLLGDPointCell : UIView <IESLLGDImagePointProtocol>

@property (retain, nonatomic) IESLLGDMarqueView *marqueeView;
@property (retain, nonatomic) IESLLGDDishView *dishView;
@property (retain, nonatomic) IESLLGDCommentView *commentView;
@property (retain, nonatomic) IESLLGDSuperDiscountView *superDiscountView;
@property (retain, nonatomic) IESLLGDImagePointModel *cellData;
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
