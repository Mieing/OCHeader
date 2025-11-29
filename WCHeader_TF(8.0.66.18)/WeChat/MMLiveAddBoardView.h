@class MMLiveAddBoardViewItem, CAShapeLayer;

@interface MMLiveAddBoardView : UIView {
    MMLiveAddBoardViewItem *_sendLocationItem;
}

@property (retain, nonatomic) MMLiveAddBoardViewItem *remainSeeItem;
@property (readonly, nonatomic) MMLiveAddBoardViewItem *sendLocationItem;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double preferHeight;
@property (copy, nonatomic) id /* block */ addBoardViewItemClickBlock;
@property (nonatomic) BOOL isRemainSeeItemEnable;
@property (nonatomic) BOOL isSendLocationItemEnable;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)clickFunction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
