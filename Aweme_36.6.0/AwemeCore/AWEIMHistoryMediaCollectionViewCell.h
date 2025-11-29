@class AWEIMRefreshImageView, AWEIMHistoryMediaModel, UIImageView, NSString, UILabel, UIView, IESIMLivePhotoTagView;
@protocol IESIMLoadingViewProtocol, IESIMHistoryMediaLongPressManagerProtocol, IESIMGradientViewProtocol;

@interface AWEIMHistoryMediaCollectionViewCell : UICollectionViewCell <AWEIMOpenFeedDetailLoadingAnimation, IESIMMediaCoverDisplayProtocol>

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) IESIMLivePhotoTagView *livePhotoTag;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *headerMaskView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *bottomMaskView;
@property (retain, nonatomic) UIView *coverView;
@property (nonatomic) BOOL isExposedDisplay;
@property (retain, nonatomic) id<IESIMHistoryMediaLongPressManagerProtocol> longPressManager;
@property (nonatomic) BOOL disableLongPress;
@property (nonatomic) BOOL hideSubViews;
@property (retain, nonatomic) AWEIMRefreshImageView *imageView;
@property (retain, nonatomic) AWEIMHistoryMediaModel *mediaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaImageView;
- (id)mediaMessage;
- (id)awemeID;
- (void)addPanGes;
- (void)configView;
- (void)endAnimationForLoadingAwemeModel;
- (void)startAnimationForLoadingAwemeModel;
- (void)adjustForBigFontStyle;
- (void)handleLongPressGestures:(id)a0;
- (void)configWithModel:(id)a0 isExposedDisplay:(BOOL)a1;
- (void)reloadCellData:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (struct CGSize { double x0; double x1; })mediaSize;

@end
