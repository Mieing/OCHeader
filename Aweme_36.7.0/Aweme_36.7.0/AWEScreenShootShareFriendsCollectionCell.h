@class UIImageView, UILabel, UIView, UILongPressGestureRecognizer;
@protocol AWEIMShareModelProtocol;

@interface AWEScreenShootShareFriendsCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *imageBackView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIView *userActiveBackView;
@property (retain, nonatomic) UIView *userActiveView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> item;
@property (nonatomic) BOOL friendsIsOnline;
@property (copy, nonatomic) id /* block */ longpressCallBack;

- (void)longPressGesHandler:(id)a0;
- (void)updateShareMoreFriends;
- (void)addLongPressGesForAvatar;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)gestureRecognizers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (void)setUpUI;

@end
