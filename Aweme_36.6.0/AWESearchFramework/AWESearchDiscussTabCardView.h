@class NSString, UICollectionView, AWESearchDiscussTabCardViewModel, UIView;

@interface AWESearchDiscussTabCardView : AWESearchCachalotBaseCardView <AWESearchDiscussTabCardViewModelDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWESearchDiscussTabCardViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)componentStickyStatusChange:(BOOL)a0;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)stickyStatusDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)forceUnsticky;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)setup;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
