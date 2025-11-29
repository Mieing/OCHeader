@class IESWalletAuthCJPopView, NSString, NSDictionary, AWELiveVerifyApi;
@protocol IESLiveCJPayService;

@interface IESWalletAuthCJPopController : UIViewController <IESWalletPopController>

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) IESWalletAuthCJPopView *containerView;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) id<IESLiveCJPayService> cjpayService;
@property (retain, nonatomic) AWELiveVerifyApi *verifyApi;
@property (nonatomic) BOOL firstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallback:(id /* block */)a0 withParameters:(id)a1;
- (void)close;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)confirm;
- (void)hideContent;
- (void)setupModel:(id)a0;
- (void)showContent;

@end
