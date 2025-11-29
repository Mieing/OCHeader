@class WCFinderLocalDraft, UIImageView, CAShapeLayer, UILabel, UIView;
@protocol WCFinderLocalDraftCollectionViewCellDelegate;

@interface WCFinderLocalDraftCollectionViewCell : WCFinderSlideMenuCell

@property (retain, nonatomic) UIView *displayView;
@property (retain, nonatomic) UIView *seperator;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *createDateLabel;
@property (retain, nonatomic) UIImageView *tipsIconView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) CAShapeLayer *progressShapeLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) WCFinderLocalDraft *cellModel;
@property (weak, nonatomic) id<WCFinderLocalDraftCollectionViewCellDelegate> delegate;

+ (id)cellId;
+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (void)setupLayout;
- (void)setupDeleteMenu;
- (id)displayContentView;
- (void)updateWithDraftModel:(id)a0 isFirstRow:(BOOL)a1;
- (void)updateProgress:(double)a0 text:(id)a1;
- (void)showProgressUI:(BOOL)a0;
- (void)onSlideDelete;
- (void).cxx_destruct;

@end
