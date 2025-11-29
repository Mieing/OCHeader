@class DUXBottomNotification, UIImageView, AWEAwemeModel, UIView, UIButton;

@interface AWEFeedConcernPOIGoodsCardTip : NSObject

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *unscribeButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) DUXBottomNotification *tipsShowedButton;

+ (BOOL)getFollowGoodsCardFirstSeenStatus;
+ (id)showWithAwemeModel:(id)a0 inParentView:(id)a1;

- (id)initWithAwemeModel:(id)a0 parentView:(id)a1;
- (id)createBottomNotification;
- (void).cxx_destruct;
- (id)show;

@end
