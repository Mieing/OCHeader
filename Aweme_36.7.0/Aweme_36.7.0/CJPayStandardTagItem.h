@class CJPayStandardTagModel;

@interface CJPayStandardTagItem : UIView

@property (retain, nonatomic) CJPayStandardTagModel *tagModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastWindowFrame;
@property (nonatomic) long long tagSizeType;

- (void)refreshContentViewWithTagModel:(id)a0;
- (void).cxx_destruct;

@end
