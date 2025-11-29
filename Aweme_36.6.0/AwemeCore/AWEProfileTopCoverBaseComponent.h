@class UIImageView, NSString;

@interface AWEProfileTopCoverBaseComponent : AWEProfileBaseComponent <AWEWaterMarkComponentProtocol>

@property (retain, nonatomic) UIImageView *profileTopCover;
@property (retain, nonatomic) UIImageView *navContainerViewMark;
@property (retain, nonatomic) UIImageView *navBGColorViewMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watermarkManager;
- (BOOL)enableMarkOpt;
- (void)addMarkToNavigationContainerView:(id)a0;
- (void)addMarkToBgCornerView:(id)a0;
- (BOOL)enableTopCover;
- (void)changeProfileTopCoverImage:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)onInit;

@end
