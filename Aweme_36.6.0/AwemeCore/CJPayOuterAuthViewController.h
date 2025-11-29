@class NSString, UIImageView, NSDictionary, UILabel, UIView, CJPayCreateOrderResponse;
@protocol CJPayAPIDelegate;

@interface CJPayOuterAuthViewController : CJPayFullPageBaseViewController <CJPayAPIDelegate>

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *userNicknameLabel;
@property (retain, nonatomic) UIImageView *userAvatarImageView;
@property (copy, nonatomic) NSString *returnURL;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (nonatomic) BOOL isFromApp;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) double lastTimestamp;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (double)halfVCContainerHeight;
- (void)p_openBindVC;
- (void)p_alertUpgradeVersion;
- (void)p_closeCashierDeskAndJumpBackWithResult:(unsigned long long)a0;
- (void)p_alertRequestErrorWithMsg:(id)a0 clickAction:(id /* block */)a1;
- (void)p_startBackgroundAnimation;
- (id)p_getJumpBackUrlStr;
- (id)getJumpBackUniversalLinkStr;
- (id)p_mergeCommonParamsWith:(id)a0 response:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
