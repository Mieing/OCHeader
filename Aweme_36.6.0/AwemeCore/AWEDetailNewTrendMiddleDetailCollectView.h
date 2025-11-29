@class UIImageView, UIImage, UILabel, UIView, UIButton;

@interface AWEDetailNewTrendMiddleDetailCollectView : UIView

@property (retain, nonatomic) UIView *titleSkeletonView;
@property (retain, nonatomic) UIView *subTitleSkeletonView;
@property (retain, nonatomic) UIImageView *coverPhotoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *collectionButton;
@property (retain, nonatomic) UILabel *collectionLabel;
@property (retain, nonatomic) UIButton *useItemButton;
@property (retain, nonatomic) UILabel *useItemLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImage *musicPhoto;
@property (retain, nonatomic) UIImage *effectPhoto;
@property (retain, nonatomic) UIView *collectionGestureView;
@property (retain, nonatomic) UIView *useItemGestureView;
@property (nonatomic) BOOL isClickCollectionStatus;
@property (copy, nonatomic) id /* block */ didCollectionItemActionBlock;
@property (copy, nonatomic) id /* block */ didUseItemActionBlock;

- (void)handleTitleChange:(id)a0;
- (void)handleSubTitleChange:(id)a0;
- (void)clickCollectionAction;
- (void)clickUseItemAction;
- (void)handleIsSkeletonModeStatus:(BOOL)a0;
- (void)handleCoverPhotoUrlsChange:(id)a0;
- (void)handleIsMusicItemStatus:(BOOL)a0 isLunaMusicStatus:(BOOL)a1 isLunaMVStatus:(BOOL)a2;
- (void)handleIsHiddenLineViewStatusChange:(BOOL)a0;
- (void)handleIsCollectStatusChange:(BOOL)a0;
- (void)setupNewUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
