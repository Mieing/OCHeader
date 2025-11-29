@class UIImageView, MMFinderGameLiveWelfareCollectionCellViewModel, MMWebImageView, RichTextView, MMFinderGameLiveWelfareTaskDegreeCompletionView;

@interface MMFinderGameLiveWelfareTaskCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) MMFinderGameLiveWelfareTaskDegreeCompletionView *degreeCompletionView;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) MMFinderGameLiveWelfareCollectionCellViewModel *viewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;

@end
