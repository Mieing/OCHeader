@class BTBaseItemCellViewModel;
@protocol BTBaseItemCellViewDelegate;

@interface BTBaseItemCellView : MMTableViewCell

@property (weak, nonatomic) id<BTBaseItemCellViewDelegate> delegate;
@property (readonly, nonatomic) BTBaseItemCellViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (id)initWithViewModel:(id)a0 reuseIdentifier:(id)a1;
- (void)setViewModel:(id)a0;
- (id)getCoverImageView;
- (void)forceSetHighlighted:(BOOL)a0;
- (void)didSelectItemAtIndexPath:(id)a0;
- (void)updateCellOnPageAppear;
- (void).cxx_destruct;

@end
