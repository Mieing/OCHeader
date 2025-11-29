@class IESLiveButton, UIImageView, IESLiveImageView, HTSEventForwardingView, UIView, IESLiveUGCVideoCellModel;
@protocol IESLiveCompoundSubscription;

@interface IESLiveUGCVideoCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveImageView *videoCover;
@property (retain, nonatomic) HTSEventForwardingView *playingView;
@property (retain, nonatomic) HTSEventForwardingView *playingHint;
@property (retain, nonatomic) HTSEventForwardingView *willPlayView;
@property (retain, nonatomic) IESLiveButton *likeButton;
@property (nonatomic) int videoType;
@property (retain, nonatomic) UIView *labelContentView;
@property (retain, nonatomic) HTSEventForwardingView *selectedView;
@property (retain, nonatomic) UIImageView *highQualityLabel;
@property (retain, nonatomic) IESLiveUGCVideoCellModel *model;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> cellModelDisposable;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (id)likeCountWithNumber:(id)a0;
- (void)bindCellModel;
- (id)createMaskViewWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
