@interface MMLiveLotteryDetailCardGiftFlowLayout : UICollectionViewFlowLayout {
    double _sumCellWidth;
}

@property (nonatomic) double betweenOfCell;
@property (nonatomic) double betweenOfSection;
@property (nonatomic) long long cellType;

- (id)init;
- (id)initWthType:(long long)a0;
- (id)initWithType:(long long)a0 betweenOfCell:(double)a1 betweenOfSection:(double)a2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCellFrameWith:(id)a0;

@end
