@class UIButton, NSString, UIImageView, UIView, OpenApiParameter, MMUILabel;
@protocol WCShareAuthViewControllerDelegate;

@interface WCShareAuthViewController : MMUIViewController

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *extText;
@property (retain, nonatomic) NSString *extUrl;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int type;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgSubType;
@property (retain, nonatomic) NSString *appBrandUserName;
@property (retain, nonatomic) NSString *appBrandPath;
@property (retain, nonatomic) NSString *userOpenId;
@property (retain, nonatomic) NSString *songAlbumUrl;
@property (retain, nonatomic) UIView *scrollView;
@property (retain, nonatomic) UIView *errView;
@property (retain, nonatomic) UIImageView *errIconImgView;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) OpenApiParameter *openParam;
@property (weak, nonatomic) id<WCShareAuthViewControllerDelegate> delegate;
@property (nonatomic) BOOL bIsFromSysCopy;

- (id)initWithType:(int)a0 openParam:(id)a1 txt:(id)a2 url:(id)a3 msgType:(unsigned int)a4;
- (id)initWithType:(int)a0 openParam:(id)a1 txt:(id)a2 url:(id)a3 msgType:(unsigned int)a4 songAlbumUrl:(id)a5;
- (id)initWithType:(int)a0 openParam:(id)a1 txt:(id)a2 url:(id)a3 msgType:(unsigned int)a4 desc:(id)a5 extraData:(id)a6;
- (id)initWithType:(int)a0 openParam:(id)a1 txt:(id)a2 url:(id)a3 msgType:(unsigned int)a4 desc:(id)a5 songAlbumUrl:(id)a6 extraData:(id)a7;
- (id)initWithType:(int)a0 openParam:(id)a1 txt:(id)a2 url:(id)a3 msgType:(unsigned int)a4 msgSubType:(unsigned int)a5 desc:(id)a6 songAlbumUrl:(id)a7 extraData:(id)a8;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)makeLink;
- (id)makeStateDeepLinkParam;
- (id)getType;
- (void)onBackBtnClick:(id)a0;
- (void)goBack;
- (void)didSuccessWithResult:(id)a0;
- (void)didFail:(id)a0;
- (BOOL)checkOpensdkFieldOptions;
- (BOOL)checkMusicFieldOptions;
- (void)didNeedRefreshTokenWithResult:(id)a0;
- (void)didNeedRedirectUrlWithResult:(id)a0;
- (void)sendAuthRequest;
- (void)checkIfNeedUpdateAppDataFromServer:(id)a0 version:(unsigned int)a1;
- (void)showErrorView:(id)a0;
- (void)layoutErrorView;
- (void)viewDidLayoutSubviews;
- (void)reportTranslateLinkFail:(id)a0 result:(id)a1;
- (void).cxx_destruct;

@end
