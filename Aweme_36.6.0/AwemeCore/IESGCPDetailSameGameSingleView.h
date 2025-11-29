@class IESGCPDetailSameGameSingleViewModel, UIImageView, UILabel, UIButton;

@interface IESGCPDetailSameGameSingleView : UIView

@property (retain, nonatomic) IESGCPDetailSameGameSingleViewModel *viewModel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *tagLabel;

- (void)_handleClickAction;
- (void)_makeButtonTrackerNode;
- (void)trackHeliumGameClickAction;
- (void)trackAppClickActionWithAppDidDownload:(BOOL)a0;
- (void)_handleShowAction;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
