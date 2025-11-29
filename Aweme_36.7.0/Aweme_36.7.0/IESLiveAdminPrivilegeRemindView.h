@class NSMutableArray, NSArray, UIImageView, UIView, UILabel, UIButton;

@interface IESLiveAdminPrivilegeRemindView : UIView

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) NSMutableArray *guideLabels;
@property (nonatomic) double baseViewHeight;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isBottomType;
@property (copy, nonatomic) id /* block */ backBlock;
@property (nonatomic) BOOL isWhite;

- (void)onSelfHide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isWhite:(BOOL)a1 baseViewHeight:(double)a2 isBottomType:(BOOL)a3;
- (void)backAction;
- (void).cxx_destruct;
- (void)setupView;

@end
