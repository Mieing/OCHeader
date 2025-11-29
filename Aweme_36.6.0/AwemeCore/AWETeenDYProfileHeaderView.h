@class UIPanGestureRecognizer, AWETeenProfileSocialStatisticView, UILabel, UIView, UIButton;

@interface AWETeenDYProfileHeaderView : AWETeenProfileHeaderView

@property (retain, nonatomic) UIButton *avatarEditButton;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIView *avatarBackgoundView;
@property (retain, nonatomic) AWETeenProfileSocialStatisticView *socialStatisticView;
@property (nonatomic) BOOL isAvatarUnreadCircleShown;
@property (copy, nonatomic) id /* block */ handlePanGestureBlock;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;

- (double)signatureTop;
- (BOOL)isCenterStyle;
- (double)profileAvatarWidth;
- (double)originYOfSocialStatisticView;
- (void).cxx_destruct;

@end
