@class AFDFriendRecommendMultiAvatarViewConfig, NSMutableArray;

@interface AFDFriendRecommendMultiAvatarView : UIView

@property (retain, nonatomic) AFDFriendRecommendMultiAvatarViewConfig *config;
@property (retain, nonatomic) NSMutableArray *avatarURLModels;
@property (retain, nonatomic) NSMutableArray *avatarViews;

- (id)avatarMaskLayer;
- (double)avatarOffset;
- (double)avatarMargin;
- (id)createAvatarViewWithModel:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (double)totalWidth;
- (void)updateWithModel:(id)a0;
- (double)avatarWidth;

@end
