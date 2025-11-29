@class UIImageView, MMBadgeView, EmoticonCustomSortSingleBrick;

@interface EmoticonCustomSortInsertBrickView : MMUIView

@property (retain, nonatomic) UIImageView *emoticonView;
@property (retain, nonatomic) MMBadgeView *countView;
@property (retain, nonatomic) EmoticonCustomSortSingleBrick *mainBrick;
@property (retain, nonatomic) EmoticonCustomSortSingleBrick *midBrick;
@property (retain, nonatomic) EmoticonCustomSortSingleBrick *bottomBrick;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (id)genBrickBGView;
- (void)updateWithWrap:(id)a0 andTotalCount:(unsigned long long)a1;
- (void).cxx_destruct;

@end
