@class MMHeadImageView, WCCanvasSocialComponentFriendAvatarView, WCCanvasComponentSocialInfo, NSMutableArray, UILabel, UIView, WCAdURLImageView;

@interface WCCanvasSocialComponent : WCCanvasComponent

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) WCAdURLImageView *backgroundImage;
@property (retain, nonatomic) MMHeadImageView *selfHeadImage;
@property (retain, nonatomic) WCAdURLImageView *avatarBackgroundImg;
@property (retain, nonatomic) UILabel *avatarDescLabel;
@property (retain, nonatomic) WCCanvasSocialComponentFriendAvatarView *friendAvatarView;
@property (retain, nonatomic) UILabel *friendAvatarDescLabel;
@property (retain, nonatomic) WCCanvasComponentSocialInfo *socialInfo;
@property (retain, nonatomic) NSMutableArray *friendUsernames;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)layoutSubviews;
- (void)initViews;
- (void)parseDynamicInfo;
- (void)parseFriendUsernames;
- (void)updateViews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (id)generateLabelWithFont:(id)a0 textColor:(id)a1;
- (void)updateTitleLabelWithPrefix:(id)a0 infix:(id)a1 suffix:(id)a2;
- (void)updateFriendAvatarDesc;
- (void)updateSizeForLabel:(id)a0;
- (void)reportForUIType;
- (BOOL)isFriendCard;
- (void).cxx_destruct;

@end
