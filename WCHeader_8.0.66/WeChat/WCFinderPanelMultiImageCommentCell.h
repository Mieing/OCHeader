@class WCFinderAnimationLoadingView, UIImageView, WCFinderComment;

@interface WCFinderPanelMultiImageCommentCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderComment *comment;
@property (copy, nonatomic) id /* block */ clickAction;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *imageView;

+ (id)cellID;

- (void)updateWithComment:(id)a0 clickAction:(id /* block */)a1;
- (void)doLoadThumbImageOrNext;
- (void)doLoadBigImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)prepareForReuse;
- (void)adjustUILayout;
- (void)_setImageViewImage:(id)a0;
- (void)handleClickImageAction:(id)a0;
- (void).cxx_destruct;

@end
