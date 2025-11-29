@class NSString, NSDictionary, IESLLLiveLynxView, LLCubeModel;

@interface IESLLLiveLynxPopupViewController : UIViewController <LLCubeViewDelegate>

@property (retain, nonatomic) IESLLLiveLynxView *lynxView;
@property (retain, nonatomic) LLCubeModel *model;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popVCList;
+ (void)dismissAllPopVC;

- (void)cubeViewWillStartLoading:(id)a0;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (id)initWithURL:(id)a0 payload:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)tapAction;
- (void)dismissSelf;

@end
