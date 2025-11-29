@class CAShapeLayer, UIView, AWEUserModel, AFDNewSchoolStoryFeedCellAccessibilityImageView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AFDNewSchoolStoryFeedCellAvatarImageView : UIView

@property (retain, nonatomic) AFDNewSchoolStoryFeedCellAccessibilityImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isShowingLiveAnimation;

- (void)accessibilityDidBecomeFocused;
- (void)updateWithUser:(id)a0 needLiveStoryMark:(BOOL)a1;
- (void)updateWithUser:(id)a0 needLiveStoryMark:(BOOL)a1 isVsPremiere:(BOOL)a2;
- (BOOL)showLiveMark:(id)a0;
- (void)cancelImageRequest;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithUser:(id)a0;

@end
