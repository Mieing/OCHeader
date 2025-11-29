@class UIImageView, AWEAwemeModel, UIView, UILabel, UIVisualEffectView;

@interface AWEStoryCellMaskView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;

+ (id)configCleanModeStoryCellMask:(id)a0 inView:(id)a1;
+ (BOOL)shouldShowWith:(id)a0;
+ (struct CGSize { double x0; double x1; })viewSizeWith:(id)a0 containerView:(id)a1;

- (void)configModel:(id)a0;
- (id)imageURLArray:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
