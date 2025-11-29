@class WAProfileRelatedViewModel, NSString, UIImageView, WAHeaderStackDisplayView, MMUILabel;

@interface WAProfileRelatedBrandCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol> {
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    WAHeaderStackDisplayView *_headerStackView;
    UIImageView *_arrowView;
    WAProfileRelatedViewModel *_viewModel;
    unsigned long long _showIconCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;
+ (double)cellHeight;

- (void)setViewDataModel:(id)a0;
- (void)onViewPositionUpdatedWithIndexPath:(id)a0 sectionItemCount:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)updateCellRelatedListWith:(id)a0;
- (void)updateCellTitle;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
