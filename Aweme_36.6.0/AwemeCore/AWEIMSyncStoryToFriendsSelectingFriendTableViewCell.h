@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWEIMSyncStoryToFriendsSelectingFriendTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) unsigned long long hashFlag;
@property (retain, nonatomic) UIView *lineView;

+ (id)identifier;

- (void)updateIconViewNeedClipToBounds:(BOOL)a0;
- (void)updateIconWithImage:(id)a0 needClipToBounds:(BOOL)a1;
- (void)updateIconWithURL:(id)a0 needClipToBounds:(BOOL)a1;
- (void)updateOnlineStatus:(BOOL)a0;
- (void)updateSelectStatus:(BOOL)a0 isDefaultSelected:(BOOL)a1;
- (void)updateCellCorner:(BOOL)a0 maskSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;

@end
