@class AWEPublishCoproduceSearchBar;
@protocol AWEPublishCoproduceSearchViewDelegate;

@interface AWEPublishCoproduceSearchView : UIView

@property (weak, nonatomic) id<AWEPublishCoproduceSearchViewDelegate> delegate;
@property (retain, nonatomic) AWEPublishCoproduceSearchBar *searchBar;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;

@end
