@class NSString, UIImageView, AFDColorRingView, UIView;
@protocol AWEUserListGeneralCellConfigProtocol;

@interface AWEUserListGeneralCellAvatarView : UIView <AWEUserListGeneralCellComponentProtocol>

@property (weak, nonatomic) id<AWEUserListGeneralCellConfigProtocol> config;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AFDColorRingView *colorRingView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UIImageView *verifiedIconImageView;
@property (retain, nonatomic) UIImageView *diggTipView;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double onlineDotInnerWidth;
@property (nonatomic) double onlineDotOutterWidth;
@property (nonatomic) double verifiedIconWidth;
@property (nonatomic) double diggTipIconInnerWidth;
@property (nonatomic) double diggTipIconOutterWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)setupAvatarImageView;
- (void)setupColorRingView;
- (void)setupOnlineDotView;
- (void)setupVerifiedIconImageView;
- (void)setupDiggTipView;
- (void)updateLayoutWithConfig:(id)a0;
- (void)updateAvatarViewWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
