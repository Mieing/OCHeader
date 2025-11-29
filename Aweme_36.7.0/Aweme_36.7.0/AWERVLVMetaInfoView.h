@class UIImageView, UILabel, UIView, AWELVideoAlbumInfoModel;
@protocol AWERVLVMetaInfoViewDelegate;

@interface AWERVLVMetaInfoView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *moreView;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIImageView *moreImg;
@property (retain, nonatomic) UILabel *iconLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *videoModel;
@property (nonatomic) BOOL shouldShowPlayVVCount;
@property (retain, nonatomic) UILabel *playVVCountLabel;
@property (weak, nonatomic) id<AWERVLVMetaInfoViewDelegate> delegate;

- (void)updateWithModel:(id)a0 shouldShowPlayVVCount:(BOOL)a1;
- (void)updateConstraintsForPannel;
- (void)setIconTagLabel;
- (id)buildInfoLabelText:(id)a0 shouldShowPlayVVCount:(BOOL)a1;
- (void)moreClick;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)infoLabelFont;

@end
