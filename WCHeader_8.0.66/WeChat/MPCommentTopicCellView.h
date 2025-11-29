@class MPCommentTopicCellViewModel;

@interface MPCommentTopicCellView : MPCommentBaseCellView

@property (readonly, nonatomic) MPCommentTopicCellViewModel *viewModel;

- (void)updateWithViewModel:(id)a0;
- (void)layoutSubviews;

@end
