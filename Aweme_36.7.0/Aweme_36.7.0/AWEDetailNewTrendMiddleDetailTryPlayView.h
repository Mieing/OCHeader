@class UIImageView, DUXButton, UILabel, UIView;

@interface AWEDetailNewTrendMiddleDetailTryPlayView : UIView

@property (retain, nonatomic) UIImageView *coverPhotoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) DUXButton *tryPlayButton;
@property (copy, nonatomic) id /* block */ didTryPlayActionBlock;

- (void)handleTitleChange:(id)a0;
- (void)handleSubTitleChange:(id)a0;
- (void)handleCoverPhotoUrlsChange:(id)a0;
- (void)handleIsHiddenLineViewStatusChange:(BOOL)a0;
- (void)clickTryPlayAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
