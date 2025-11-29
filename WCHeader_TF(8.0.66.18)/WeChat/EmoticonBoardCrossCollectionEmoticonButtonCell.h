@class UIView, EmoticonBoardButton;

@interface EmoticonBoardCrossCollectionEmoticonButtonCell : UICollectionViewCell

@property (retain, nonatomic) EmoticonBoardButton *emoticonBoardButton;
@property (nonatomic) BOOL isCustomButton;
@property (retain, nonatomic) UIView *highlightOverlay;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)showHighLight:(BOOL)a0;
- (void).cxx_destruct;

@end
