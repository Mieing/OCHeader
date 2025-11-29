@class MPCommentReplyCellViewModel, UIView;

@interface MPCommentReplyCellView : MPCommentBaseCellView {
    UIView *m_authorMarkView;
}

@property (readonly, nonatomic) MPCommentReplyCellViewModel *viewModel;

- (void)updateWithViewModel:(id)a0;
- (void)initSubViews;
- (void)layoutSubviews;
- (double)maskViewHeaderOffset;
- (void).cxx_destruct;

@end
