@class UIView, NSString, AWEAwemeModel, AWEUserModel, UIImageView, AWEUILoadingView, AWEOriginalAdModel, UIButton, UILabel;

@interface AWESearchAdEndorseLiveInfoView : UIView <AWESearchAdAppointmentResultMessage, UIGestureRecognizerDelegate, AWESearchAdEndorseLiveInfoView>

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *subDescLabel;
@property (retain, nonatomic) UIButton *appointmentBtn;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEOriginalAdModel *adInfo;
@property (nonatomic) BOOL isLiveRoom;
@property (nonatomic) BOOL didSubscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ appointmentBtnTappedBlock;
@property (copy, nonatomic) id /* block */ infoViewTappedBlock;
@property (copy, nonatomic) id /* block */ enterLiveRoomBlock;
@property (retain, nonatomic) AWEUserModel *userInfo;
@property (retain, nonatomic) AWEAwemeModel *aweme;

+ (id)liveInfoView;

- (void)handleAppointmentResultWithAdModel:(id)a0 sceneType:(long long)a1 appointmentStatus:(BOOL)a2 error:(id)a3;
- (void)setupTapGesture;
- (void)setupSubviewAccessbility;
- (BOOL)useNewAvatar;
- (void)appendAdLabelInDescWithAdModel:(id)a0;
- (void)configLayouts;
- (id)p_attributeStringForAdMoreLinkView:(id)a0;
- (void)handleBtnTapped;
- (void)jumpToAppointmentPageView;
- (void)tapBackgroundView;
- (void)tapAvatar;
- (void)configWithAdInfo:(id)a0 isLiveRoom:(BOOL)a1 andAweme:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;
- (void)setupSubviews;

@end
