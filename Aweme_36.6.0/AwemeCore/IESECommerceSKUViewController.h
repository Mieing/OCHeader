@class NSString, UIView;
@protocol IESECSKUViewProtocol, IESECSKUContextProtocol;

@interface IESECommerceSKUViewController : UIViewController <IESECSKUViewProtocol>

@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (weak, nonatomic) id<IESECSKUContextProtocol> skuContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)subscribeEvent;
- (void)dismissCurrentVC;
- (id)initWithSKUView:(id)a0 context:(id)a1;
- (void)dismissWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
