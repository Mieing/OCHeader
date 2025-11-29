@class UIFont, NSString, NSArray, UIImage, NSAttributedString, UIImageView, IESLiveGCDTimer, NSNumber, UIColor;
@protocol IESLiveRoomService;

@interface IESLiveInteractionInvitationPanelViewModel : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *displayCountDownTimer;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long panelDisplayDurationInSeconds;
@property (retain, nonatomic) NSNumber *panelDisplayRemainSeconds;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) UIImage *defaultAvatarImage;
@property (copy, nonatomic) NSString *avatarBottomRightDecorationURL;
@property (retain, nonatomic) UIImage *defaultAvatarBottomRightDecorationImage;
@property (copy, nonatomic) NSArray *avatarBackgroundAnimationURLs;
@property (copy, nonatomic) NSString *invitationDescription;
@property (copy, nonatomic) NSAttributedString *attributedInvitationDescription;
@property (retain, nonatomic) UIImageView *headerImage;
@property (copy, nonatomic) NSString *leftButtonText;
@property (retain, nonatomic) UIColor *leftButtonBackgroundColor;
@property (retain, nonatomic) UIColor *leftButtonTextColor;
@property (retain, nonatomic) UIFont *leftButtonTextFont;
@property (copy, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) UIColor *rightButtonBackgroundColor;
@property (retain, nonatomic) UIColor *rightButtonTextColor;
@property (nonatomic) BOOL useBizOptimizedLayout;
@property (copy, nonatomic) NSString *invitationDetail;

- (id)initWithDIContext:(id)a0 room:(id)a1;
- (void)parseFromInvitationContext:(id)a0;
- (void)parseFromPrepareInviteContent:(id)a0;
- (void)startDisplayCountDownTimerWithCallback:(id /* block */)a0;
- (void)endDisplayCountDownTimer;
- (void).cxx_destruct;
- (void)dealloc;

@end
