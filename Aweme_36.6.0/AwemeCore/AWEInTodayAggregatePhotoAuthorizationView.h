@class AVPlayer, NSString, UIImageView, UITextLinkView, UILabel, ACCButton, UIView;
@protocol AWECloudAlbumPopupVCProtocol;

@interface AWEInTodayAggregatePhotoAuthorizationView : UIView <UITextViewDelegate, AWECloudAlbumPopupContentViewProtocol>

@property (retain, nonatomic) UIImageView *flagImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextLinkView *tipsLabel;
@property (copy, nonatomic) NSString *videoFilePath;
@property (nonatomic) BOOL isVideoType;
@property (retain, nonatomic) ACCButton *refuseButton;
@property (retain, nonatomic) ACCButton *agreeButton;
@property (retain, nonatomic) UIView *handleView;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (copy, nonatomic) NSString *refuseText;
@property (copy, nonatomic) NSString *agreeText;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *agreementLink;
@property (copy, nonatomic) NSString *guideTitle;
@property (copy, nonatomic) NSString *guideHintText;
@property (retain, nonatomic) ACCButton *protocolButton;
@property (retain, nonatomic) UILabel *protocolLabel;
@property (copy, nonatomic) id /* block */ refuseAction;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (copy, nonatomic) id /* block */ cancleBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (nonatomic) BOOL needPanGesture;

- (void)agreeClickAction:(id)a0;
- (void)refuseClickAction:(id)a0;
- (void)cancleAction;
- (void)setupUIForVideo;
- (void)setupUIForStatic;
- (void)setupPlayerModel:(id)a0;
- (void)playerDidFinish;
- (void)updateProtocolButton;
- (void)protocolButtonClick:(id)a0;
- (id)initWithRefuseText:(id)a0 refuseAction:(id /* block */)a1 agreeText:(id)a2 agreeAction:(id /* block */)a3 cancelAction:(id /* block */)a4 videoFilePath:(id)a5 scene:(id)a6 agreementLink:(id)a7 guideTitle:(id)a8 guideHintText:(id)a9;
- (BOOL)shouldHideBrandName;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (void)setupUI;
- (double)contentViewHeight;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
