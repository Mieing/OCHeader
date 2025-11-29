@class NSString, BDAccountSealEvent, BDTuringConfig, BDAccountSealModel;

@interface BDAccountSealer : NSObject <BDTuringWebViewDelegate>

@property (retain, nonatomic) BDAccountSealEvent *eventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long startLoadTime;
@property (nonatomic) BOOL isShowSealView;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDAccountSealModel *model;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDAccountSealEvent *eventService;
@property (nonatomic) BOOL isShowSealView;
@property (nonatomic) long long startLoadTime;
@property (retain, nonatomic) BDAccountSealModel *model;

+ (void)setCustomTheme:(id)a0;
+ (void)setCustomText:(id)a0;

- (void)popVerifyViewWithModel:(id)a0;
- (void)webViewDidShow:(id)a0;
- (void)webViewDidHide:(id)a0;
- (void)webViewDidDismiss:(id)a0;
- (void)webViewLoadDidFail:(id)a0;
- (void)webViewLoadDidSuccess:(id)a0;
- (void)popWithModel:(id)a0;
- (id)initWithTuring:(id)a0;
- (void)queryStatusWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
