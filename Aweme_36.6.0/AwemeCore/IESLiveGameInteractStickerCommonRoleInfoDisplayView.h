@class UIImageView, IESLiveGameInteractStickerTemplate01RoleInfo, UILabel;

@interface IESLiveGameInteractStickerCommonRoleInfoDisplayView : UIView

@property (retain, nonatomic) IESLiveGameInteractStickerTemplate01RoleInfo *roleInfo;
@property (retain, nonatomic) UIImageView *roleIconImageView;
@property (retain, nonatomic) UILabel *roleNameLabel;
@property (retain, nonatomic) UILabel *roleTagLabel;
@property (nonatomic) double scaleRatio;

+ (void)updateTagLabel:(id)a0 text:(id)a1;

- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
