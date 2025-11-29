@class GameNoticeAdditionalInfo, UIView, UILabel, MMWebImageView, MMUIButton;
@protocol GameNoticeAdditionalInfoViewDelegate;

@interface GameNoticeAdditionalInfoView : UIView

@property (retain, nonatomic) GameNoticeAdditionalInfo *additionalInfo;
@property (retain, nonatomic) MMWebImageView *infoIcon;
@property (retain, nonatomic) UILabel *headLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *additionalButton;
@property (retain, nonatomic) UIView *tapView;
@property (weak, nonatomic) id<GameNoticeAdditionalInfoViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)clickJumpButton;
- (void).cxx_destruct;

@end
