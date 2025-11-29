@class FinderJumpInfo_CardStyle, MMUIButton, NSString, MMWebImageView, UILabel, FinderJumpInfo_Style;

@interface WCFinderJumpInfoCard : WCFinderJumpInfoView <MMWebImageViewDelegate>

@property (retain, nonatomic) FinderJumpInfo_Style *jumpInfoStyle;
@property (retain, nonatomic) FinderJumpInfo_CardStyle *cardConfig;
@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (weak, nonatomic) MMWebImageView *infoIconView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (nonatomic) double maxWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame;
@property (nonatomic) unsigned long long currentUIStyle;
@property (nonatomic) unsigned long long feedExposeTimestamp;
@property (nonatomic) unsigned long long viewExposeTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCardStyle:(unsigned long long)a0;
- (void)changeToAnimationStartStateWithTitleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)changeToAnimationFinishState;
- (void)setUIStyle:(unsigned long long)a0;
- (void)updateActionButtonStyle;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)changeToShow:(BOOL)a0;
- (void)onActionButtonDidClick;
- (void)updateUIInfo;
- (int)buttonType;
- (int)imageSizeType;
- (void)layoutUI;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
