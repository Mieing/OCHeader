@class NSString, WCFinderHeadImageView, WCFinderPersonalContactModel, UILabel, WCFinderAuthInfoIconView;

@interface WCFinderPersonalCenterAvatarCellView : UICollectionViewCell <WCFinderPersonalContactModelExt, WCFinderPersonalCenterCellProtocol>

@property (retain, nonatomic) WCFinderPersonalContactModel *model;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *fansCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)update:(id)a0;
- (void)updateContact;
- (void)updateFansCount;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)onContactDidUpdate;
- (void)onUserMessageDidUpdate;
- (void).cxx_destruct;

@end
