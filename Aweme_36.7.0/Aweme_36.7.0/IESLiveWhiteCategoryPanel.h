@class IESLiveWhiteCategoryCert, UIImageView, IESLiveImageView, IESLiveUserCardStore, UILabel, UIView;

@interface IESLiveWhiteCategoryPanel : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIImageView *whiteCategoryCertContainer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *contextLabel;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) IESLiveImageView *panelIcon;
@property (retain, nonatomic) UILabel *bottomDescLabel;
@property (retain, nonatomic) IESLiveWhiteCategoryCert *whiteCategoryCertStore;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) double width;

- (void)trackWithEvent:(id)a0;
- (id)initWithStore:(id)a0 landscapeMode:(BOOL)a1;
- (void)jumpWhiteCategoryCertPage;
- (void)closeWhiteCategoryPanel;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setupViews;
- (void)setData;

@end
