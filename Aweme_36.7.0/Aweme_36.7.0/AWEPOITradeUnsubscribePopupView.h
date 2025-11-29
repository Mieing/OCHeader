@class UIView, AWEAwemeModel, UIImage, UIImageView, AWEUIButton, UIButton, NSMutableArray, UILabel;

@interface AWEPOITradeUnsubscribePopupView : UIView

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleTailLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *settingEntryButton;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) AWEUIButton *unscribeButton;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ unscribeBlock;

+ (id)showWithUserModel:(id)a0 unscribeBlock:(id /* block */)a1;

- (id)initWithUserModel:(id)a0 unscribeBlock:(id /* block */)a1;
- (void)enterSettingPage;
- (void)unscribeGoodsAction;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setup;
- (void)show;

@end
