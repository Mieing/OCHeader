@class NSString, BDMannorManager, AWEAwemeModel, UIView;

@interface AWEAdLandPageMannorCardManager : HTSService <AWEAdLandPageMannorCardManager, BDMannorAdComponentDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) BDMannorManager *mannorManager;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isHalfLandPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAdMannorCard:(id)a0;
+ (id)createNewManagerWithModel:(id)a0;

- (id)lynxBridges;
- (void)p_setupMannorCard;
- (id)p_mannorContext;
- (void)setupCardWithModel:(id)a0 containerView:(id)a1;
- (void)mannorComponentDowngrade:(id)a0 errorMessage:(id)a1 componentType:(id)a2;
- (void).cxx_destruct;
- (id)componentView;

@end
