@class NSString, NSDictionary, UIView, IESECSKUShowRequest;
@protocol IESECSKUViewProtocol, IESECSKUServiceProtocol;

@interface IESECSKUBaseViewController : UIViewController <IESECSKUViewAppearance, IESECSKUFullTradeProtocol>

@property (copy, nonatomic) NSDictionary *schemaParams;
@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (weak, nonatomic) id<IESECSKUServiceProtocol> schemaDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *commonMonitorParams;

- (void)showWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithSchemaParams:(id)a0;
- (void)dismissCurrentVC;
- (void)dismissWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
