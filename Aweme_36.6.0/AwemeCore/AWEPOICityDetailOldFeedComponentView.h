@class AWEPOIDetailAwemeCollectionViewCell, AWEPOICityDetailOldFeedComponentViewModel;

@interface AWEPOICityDetailOldFeedComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailAwemeCollectionViewCell *cell;
@property (weak, nonatomic) AWEPOICityDetailOldFeedComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapView;

@end
