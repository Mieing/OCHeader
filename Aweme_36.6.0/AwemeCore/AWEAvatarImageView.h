@class NSString, CAShapeLayer, UIView, AWEAccessibilityImageView, AWEUserModel;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEAvatarImageView : UIView <AWEAvatarImageViewProtocol>

@property (retain, nonatomic) AWEAccessibilityImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isShowingLiveAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accessibilityDidBecomeFocused;
- (void)updateWithUser:(id)a0 needLiveStoryMark:(BOOL)a1;
- (void)updateWithUser:(id)a0 needLiveStoryMark:(BOOL)a1 isVsPremiere:(BOOL)a2;
- (void)updateWithUser:(id)a0 needLiveStoryMark:(BOOL)a1 isVsPremiere:(BOOL)a2 reloadLiveMark:(BOOL)a3 showLiveTag:(BOOL)a4;
- (void)reloadLiveMarkViewIfNeeded;
- (BOOL)showLiveMark:(id)a0;
- (void)cancelImageRequest;
- (void)updateWithUser:(id)a0 needLiveStoryMark:(BOOL)a1 isVsPremiere:(BOOL)a2 reloadLiveMark:(BOOL)a3;
- (void)rmAvatarImageViewOffscreenRendering;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithUser:(id)a0;

@end
