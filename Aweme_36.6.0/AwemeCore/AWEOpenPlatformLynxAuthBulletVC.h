@class NSString, AWEOpenPlatformAuthEntranceModel, UIView;
@protocol AnnieXContainerBaseProtocol, BDXViewContainerProtocol, BDXContainerLifecycleProtocol, AnnieXCardModelProtocol;

@interface AWEOpenPlatformLynxAuthBulletVC : UIViewController <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *anniexView;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol> containerLifecycleDelegate;
@property (copy, nonatomic) NSString *authID;
@property (nonatomic) BOOL useAnniex;
@property (retain, nonatomic) AWEOpenPlatformAuthEntranceModel *entranceModel;
@property (copy, nonatomic) id /* block */ deallocBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadURLString:(id)a0 isHalfPage:(BOOL)a1;
- (void)updatePreRequestGlobalProps:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
