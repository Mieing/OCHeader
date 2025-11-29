@class UILabel, MMEmoticonView, CEmoticonWrap;

@interface RelatedEmoticonCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *bottomTextLabel;
@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (retain, nonatomic) CEmoticonWrap *emoticonWrap;
@property (nonatomic) BOOL showBottomTextAndSeparateLine;
@property (nonatomic) struct CGSize { double width; double height; } emoticonSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
