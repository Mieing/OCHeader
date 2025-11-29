@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveRoomService;

@interface IESLiveFollowGuidePopupView : HTSLivePopUpView

@property (retain, nonatomic) UIView *clearBackgroundView;
@property (retain, nonatomic) UIView *whiteBackgroundView;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoom;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL showToastWhenClose;
@property (nonatomic) BOOL isClickedFollowButton;
@property (copy, nonatomic) id /* block */ followBlock;

- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveRoom:(id)a1 hintText:(id)a2 buttonText:(id)a3;
- (void)pr_follow:(id)a0;
- (void).cxx_destruct;
- (void)show;
- (void)setUpConstraints;

@end
