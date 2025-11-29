@class AWEGradientView, NSString, UICollectionView, UILabel, UIView, UIButton;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;

@interface AWEDCFeedSearchSuggestWordView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (weak, nonatomic) id<UICollectionViewDelegate, UICollectionViewDataSource> delegate;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentHeight:(double)a0;
- (void)catchTap;
- (void)catchPress;
- (void).cxx_destruct;
- (void)reload;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
