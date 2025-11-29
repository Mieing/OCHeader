@class UIButton;
@protocol EmoticonBoardCrossCollectionRecommendEmoticonSearchViewDelegate;

@interface EmoticonBoardCrossCollectionRecommendEmoticonSearchView : UICollectionReusableView

@property (retain, nonatomic) UIButton *searchButton;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionRecommendEmoticonSearchViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTapSearchButton:(id)a0;
- (void)handleTapSearchTouchDown:(id)a0;
- (void)handleTapSearchTouchUp:(id)a0;
- (void).cxx_destruct;

@end
