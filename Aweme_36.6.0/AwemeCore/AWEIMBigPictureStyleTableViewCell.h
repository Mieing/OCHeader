@class AWEIMRefreshImageView, UILabel, UIView;
@protocol AWEIMBigPictureStyleTableViewCellViewModelProtocol;

@interface AWEIMBigPictureStyleTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *iconImageView;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) id<AWEIMBigPictureStyleTableViewCellViewModelProtocol> cellViewModel;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)p_viewModelWithMessage:(id)a0 conversation:(id)a1;
+ (id)identifier;

- (void)p_setup;
- (void)p_addSubviews;
- (void)p_setupLayout;
- (void)configWithMessage:(id)a0;
- (void)p_initSubviews;
- (id)menuTargetView;
- (void)h5CoverTapped:(id)a0;
- (void)p_trackH5ShareFromFeedAnchorIfNeeded:(id)a0;
- (void)trackH5ShareEventForName:(id)a0;
- (void)trackEcomH5MsgClick;
- (void)p_trackH5ShareEventForName:(id)a0;
- (void)trackH5ShareFromFeedAnchorShowIfNeeded;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end
