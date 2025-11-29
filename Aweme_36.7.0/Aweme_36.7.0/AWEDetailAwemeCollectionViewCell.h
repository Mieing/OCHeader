@class UIView, AWEUICellMaskView, AWEAwemeModel, NSString, UIImageView, AWEAigcFollowShootTagView, CAGradientLayer, AWEDetailCellTagLabel, UIViewController, UILabel;
@protocol AWEAwemeLongPressModalViewControllerProtocol;

@interface AWEDetailAwemeCollectionViewCell : UICollectionViewCell <AWEDetailAwemeCollectionViewCellProtocol>

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLeftTagLabel;
@property (retain, nonatomic) UILabel *starTagLabel;
@property (retain, nonatomic) UIImageView *topRightImageView;
@property (retain, nonatomic) UIImageView *diggIconView;
@property (retain, nonatomic) UILabel *diggCountLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUICellMaskView *cellMaskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *hotSpotTagImageView;
@property (retain, nonatomic) UIView *editManageView;
@property (retain, nonatomic) UIView *chooseCheckBoxView;
@property (retain, nonatomic) UIImageView *chooseImage;
@property (retain, nonatomic) AWEAigcFollowShootTagView *aigcFollowShootTagView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long genreIconShowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAddCellMaskView;
+ (id)maskLayerColors;

- (void)updateWithAweme:(id)a0;
- (void)updateWithAweme:(id)a0 coverLoadOptions:(unsigned long long)a1 coverLoadCompletion:(id /* block */)a2;
- (void)updateLeftTopLabelWithItemModel:(id)a0;
- (void)updateWithItemModel:(id)a0;
- (void)updateWithItemModel:(id)a0 coverLoadOptions:(unsigned long long)a1 coverLoadCompletion:(id /* block */)a2;
- (void)showDigg:(BOOL)a0 showTitle:(BOOL)a1;
- (void)updateDiggWithCount:(long long)a0;
- (void)updateWithAweme:(id)a0 coverLoadCompletion:(id /* block */)a1;
- (void)updateReferString:(id)a0;
- (void)addLongPressGesture;
- (void)showNewPressPanelForScene:(id)a0;
- (double)topLeftTagHeight;
- (id /* block */)shareConfigurationHandler;
- (void)updateWithItemModel:(id)a0 coverLoadCompletion:(id /* block */)a1;
- (BOOL)shouldShowTopRightImageViewWithAweme:(id)a0;
- (void)showDigg:(BOOL)a0;
- (void)showTitle:(BOOL)a0;
- (void)updateWithItem:(id)a0 tagName:(id)a1 useDynamicCover:(BOOL)a2 coverLoadCompletion:(id /* block */)a3;
- (void)updateWithModel:(id)a0 tagName:(id)a1 useDynamicCover:(BOOL)a2 coverLoadCompletion:(id /* block */)a3;
- (void)showSharePanel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleLongPressGesture:(id)a0;

@end
