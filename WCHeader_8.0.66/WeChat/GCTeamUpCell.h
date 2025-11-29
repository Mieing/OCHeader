@class UIButton, JumpInfo, MMWebImageView, UILabel, UIView;

@interface GCTeamUpCell : GCChatBaseCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMWebImageView *backGroundImgView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *midLabel;
@property (retain, nonatomic) MMWebImageView *bottomImgView;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) JumpInfo *jumpInfo;
@property (retain, nonatomic) UIView *labelGroupView;

+ (void)onCalculatLayoutInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldBubbleViewClipsToBounds;
- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
