@class AWEIMPopupRedPacketView, NSString, AWEIMPopupRedPacketResultPageView, AWEIMPopupRedPacketOpenDetailData, UIImageView, AWEUILoadingView, LOTAnimationView, UILabel, AWEIMPopupRedPacketStatusModel;

@interface AWEIMPopupRedPacketViewController : UIViewController

@property (retain, nonatomic) UILabel *redPacketLabel;
@property (retain, nonatomic) LOTAnimationView *lottieTitle;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIImageView *fallbackImgView;
@property (retain, nonatomic) AWEIMPopupRedPacketView *popupRedPacketView;
@property (retain, nonatomic) UIImageView *closeButton;
@property (retain, nonatomic) UIImageView *topBgPicView;
@property (retain, nonatomic) UIImageView *exitArrowView;
@property (retain, nonatomic) AWEIMPopupRedPacketResultPageView *redPacketResultPageView;
@property (retain, nonatomic) AWEIMPopupRedPacketStatusModel *statusModel;
@property (nonatomic) BOOL isOpenPopupWindowFirst;
@property (retain, nonatomic) AWEIMPopupRedPacketOpenDetailData *applyDetailModel;
@property (copy, nonatomic) NSString *redPacketToken;
@property (nonatomic) long long enterFromType;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isShowingResultPage;
@property (nonatomic) BOOL shouldUseLottie;
@property (copy, nonatomic) id /* block */ openRedPacketResultCompletion;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;

- (id)aAWEMainModuleDOUYINLiteAdapter;
- (id)aAWEIMModuleServiceHTSAdaper;
- (void)closeResultPage;
- (id)initWithRedPacketToken:(id)a0 enterFrom:(long long)a1 isOpenPopupWindowFirst:(BOOL)a2;
- (void)closePopupRedPacketWithRightSlide:(id)a0;
- (void)requestRedPacketData;
- (void)tryToCheckRedPacketResultPage:(BOOL)a0;
- (void)hideLoadingViewIfNeeded;
- (void)updatePopupRedPacketUI;
- (void)trackRedPacketShow;
- (void)updateRedPacketResultPageUI:(BOOL)a0;
- (void)trackResultPageShow:(id)a0;
- (void)executePopupRedPacketAppearAnimation;
- (void)executeRedPacketResultPageAppearAnimation;
- (void)trackRedPacketClick:(id)a0;
- (void)executePopupRedPacketDismissAnimation;
- (void)tryToOpenRedPacketResultPage;
- (void)closeRedPacket;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateUI;
- (void)showLoadingView;

@end
