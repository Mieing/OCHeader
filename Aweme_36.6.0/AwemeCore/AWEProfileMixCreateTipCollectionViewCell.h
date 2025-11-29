@class NSString, AWEButton, UIImageView, UIView, UILabel, UIButton;

@interface AWEProfileMixCreateTipCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *mainTipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (BOOL)shouldShowMixCreateTip;
+ (id)profileMixVideoTipClickTimeRecordKey;
+ (id)profileMixVideoTipShowTimeRecordKey;
+ (id)profileMixVideoTipCloseTimeRecordKey;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (id)identifier;

- (void)awe_themeReload;
- (void)actionButtonClicked;
- (void)closeButtonClicked;
- (void)configWithMixCreateRecommendTipModel:(id)a0 userID:(id)a1;
- (void)updateMixVideoTipShow;
- (void)trackMixVideoTipShow;
- (void)recordMixVideoTipClick;
- (void)resetMixVideoTipsShow;
- (void)trackMixVideoTipClick;
- (void)recordMixVideoTipClose;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
