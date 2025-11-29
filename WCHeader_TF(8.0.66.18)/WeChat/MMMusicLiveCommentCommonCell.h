@class MMMuiscLiveCommentCommonContentView, MMMusicLiveCommentCellDetailView, MMMusicLiveCommentBaseViewModel, UIView;
@protocol MMusicLiveCommentCommonDelegate;

@interface MMMusicLiveCommentCommonCell : UITableViewCell

@property (retain, nonatomic) UIView *commentBgView;
@property (retain, nonatomic) MMMuiscLiveCommentCommonContentView *commentView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) MMMusicLiveCommentCellDetailView *detailView;
@property (retain, nonatomic) MMMusicLiveCommentBaseViewModel *viewModel;
@property (weak, nonatomic) id<MMusicLiveCommentCommonDelegate> delegate;

+ (double)calculateHeight:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)longPressToExpose;
- (void)onCommentClicked;
- (void)onCommentDetailViewClicked;
- (void).cxx_destruct;

@end
