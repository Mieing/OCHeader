@class NSArray, AWEUserModel, UIColor;

@interface AWEUserRecommendBigCardModel : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSArray *itemList;
@property (retain, nonatomic) UIColor *avatarTopDominantColor;
@property (retain, nonatomic) UIColor *avatarBottomDominantColor;
@property (nonatomic) BOOL shouldShowAvatar;
@property (nonatomic) unsigned long long addButtonType;

- (void).cxx_destruct;
- (id)initWithUser:(id)a0;

@end
