@class NSString, UIViewController, UINavigationController;

@interface BDTuringIdentityModel : BDTuringVerifyModel <BDTuringVerifyModelCreator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long identityAppID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *biz_info;
@property (nonatomic) BOOL identity_no_need_popups;
@property (copy, nonatomic) NSString *use_new_api;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL isBoe;
@property (copy, nonatomic) NSString *domain;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (weak, nonatomic) UINavigationController *currentNavigator;

+ (id)modelWithParameter:(id)a0;
+ (BOOL)canHandleParameter:(id)a0;

- (void)handleResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
