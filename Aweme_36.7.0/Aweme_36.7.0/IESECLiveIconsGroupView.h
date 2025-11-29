@class NSArray, NSMutableArray, NSString;
@protocol IESECLiveIconsGroupViewDelegate;

@interface IESECLiveIconsGroupView : UIView

@property (retain, nonatomic) NSMutableArray *avatars;
@property (retain, nonatomic) NSMutableArray *URLs;
@property (nonatomic) BOOL hasGroupIcon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double centerGap;
@property (nonatomic) double blankWidth;
@property (nonatomic) long long maxAvatarCount;
@property (nonatomic) BOOL showCornerRadius;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) NSString *defaultAvatarImageString;
@property (weak, nonatomic) id<IESECLiveIconsGroupViewDelegate> delegate;

- (void)setupUserAvatarsUI;
- (struct CGSize { double x0; double x1; })updateSelfFrame;
- (double)additionWhenAppendAvatar;
- (id)avatarViewWithURL:(id)a0;
- (BOOL)shouldRemoveAvatar;
- (void)setPropertiesForAvatar:(id)a0;
- (struct CGSize { double x0; double x1; })p_intrinsicContentSize;
- (void)updateSizeRelatedUI;
- (void)appendAvatarWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
