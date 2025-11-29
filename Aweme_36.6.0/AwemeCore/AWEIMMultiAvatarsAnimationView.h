@class NSArray;

@interface AWEIMMultiAvatarsAnimationView : UIView

@property (copy, nonatomic) NSArray *avatarUrls;
@property (copy, nonatomic) NSArray *avatarViews;
@property (nonatomic) double avatarWidth;
@property (nonatomic) long long avatarCount;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double notchWidth;
@property (nonatomic) double centerRate;

- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1;
- (void)configWithAvatarArray:(id)a0 avatarWidth:(double)a1 avatarCount:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__frameWithIndex:(long long)a0;
- (void)__updateAvatarStyle;
- (void)__updateAvatarViewsWithAnimation:(BOOL)a0;
- (long long)__indexOfURI:(id)a0 inUrls:(id)a1;
- (void)insertAvatar:(id)a0 atIndex:(long long)a1 animation:(BOOL)a2;
- (void)removeAvatarAtIndex:(long long)a0 animation:(BOOL)a1;
- (void)exchangeAvatarWithIndex1:(long long)a0 index2:(long long)a1 animation:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visiableRange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
