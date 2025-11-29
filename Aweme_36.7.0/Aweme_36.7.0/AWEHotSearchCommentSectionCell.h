@class AWEHotSearchCommentInsetsLabel, AWEHotSearchCommentAuthorInfoModel, UILabel, AWEHotSearchCommentActionBarModel, UITapGestureRecognizer, AWEHotSearchCommentSectionCellModel, YYAnimatedImageView, UIView, AWEHotSearchCommentActionBarView, AWEAliasEditLabel, NSString, AWEHotSearchCommentContentInfoModel, NSArray, YYLabel, AWECommonFeedSectionContext, UIImageView;
@protocol AWEHotSearchCommentSectionCellActionDelegate, AWECommonFeedCellModelProtocol;

@interface AWEHotSearchCommentSectionCell : UICollectionViewCell <UIGestureRecognizerDelegate, AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *insertTagView;
@property (retain, nonatomic) UILabel *insertTagLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) UIView *authorContainerView;
@property (retain, nonatomic) AWEAliasEditLabel *authorNameLabel;
@property (retain, nonatomic) AWEHotSearchCommentInsetsLabel *authorIdentityLabel;
@property (retain, nonatomic) AWEHotSearchCommentInsetsLabel *authorTagLabel;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) YYAnimatedImageView *contentStickerView;
@property (retain, nonatomic) AWEHotSearchCommentActionBarView *actionBarView;
@property (retain, nonatomic) AWEHotSearchCommentSectionCellModel *innerCellModel;
@property (retain, nonatomic) UITapGestureRecognizer *reloadStickerGesture;
@property (retain, nonatomic) UITapGestureRecognizer *openStickerDetailGesture;
@property (copy, nonatomic) NSArray *stickerURLList;
@property (nonatomic) BOOL isIdentityShowing;
@property (nonatomic) BOOL isSubComment;
@property (nonatomic) BOOL isInserted;
@property (retain, nonatomic) AWEHotSearchCommentAuthorInfoModel *authorInfoModel;
@property (retain, nonatomic) AWEHotSearchCommentContentInfoModel *contentInfoModel;
@property (retain, nonatomic) AWEHotSearchCommentActionBarModel *actionBarModel;
@property (weak, nonatomic) id<AWEHotSearchCommentSectionCellActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;

- (void)updateCellLayout;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)p_setupView;
- (void)p_bindViewAction;
- (void)p_relayoutAvatarView:(BOOL)a0;
- (void)p_relayoutAuthorTagLabel:(BOOL)a0;
- (void)p_relayoutImageAndStickerWithImageSize:(struct CGSize { double x0; double x1; })a0 stickerSize:(struct CGSize { double x0; double x1; })a1 textSize:(struct CGSize { double x0; double x1; })a2;
- (void)p_relayoutAuthorIdentityLabel:(id)a0;
- (void)p_loadImageOrSticker:(id)a0;
- (void)p_reloadSticker;
- (void)p_handleStickerLongPress:(id)a0;
- (void)p_handleContainerTap:(id)a0;
- (void)p_handleContainerLongPress:(id)a0;
- (void)p_addSticker;
- (void)p_handleReloadStickerGesture:(id)a0;
- (void)p_handleOpenStickerDetailGesture:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)hasVideo;

@end
