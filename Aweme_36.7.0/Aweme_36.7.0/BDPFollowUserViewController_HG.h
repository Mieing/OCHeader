@class NSString, BDPFollowUserModel, UIView;
@protocol BDPFollowUserViewFollowLogicProtocol_HG;

@interface BDPFollowUserViewController_HG : UIViewController <BDPFollowUserViewDelegate_HG, BDPFollowUserViewPluginDelegate> {
    BDPFollowUserModel *_userInfo;
    id<BDPFollowUserViewFollowLogicProtocol_HG> _followLogic;
    id /* block */ _defaultCloseBtnCBBlk;
    id /* block */ _defaultFollowBtnCBBlk;
}

@property (retain, nonatomic) UIView *followUserView;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) id /* block */ followClickedBlock;
@property (copy, nonatomic) id /* block */ closeClickedBlock;
@property (copy, nonatomic) NSString *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)followUserViewDidClickedCloseButton:(id)a0;
- (void)followUserViewDidClickedFollowButton:(id)a0;
- (void)bdp_refreshFollowUserView:(id)a0 model:(id)a1;
- (id)initWithUserInfo:(id)a0 followLogic:(id)a1;
- (void)showWithCompletion:(id /* block */)a0 onViewController:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)hideWithCompletion:(id /* block */)a0;

@end
