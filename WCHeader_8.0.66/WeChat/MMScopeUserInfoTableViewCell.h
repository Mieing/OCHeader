@class OauthAvatarInfo, UIImageView, MMWebImageView, CALayer, MMUILabel;

@interface MMScopeUserInfoTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMWebImageView *avatarImageView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) CALayer *topSeparateLine;
@property (retain, nonatomic) CALayer *bottomSeparateLine;
@property (retain, nonatomic) OauthAvatarInfo *avatarInfo;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isBottom;

+ (double)viewHeight;

- (void)updateView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
