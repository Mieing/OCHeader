@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEMVChannelPlayVideoViewControllerProtocol;

@interface AWEMVChannelPlayerCardBaseElement : AWEBaseElement <AWEMVChannelPlayerCardDispatchProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) UIViewController<AWEMVChannelPlayVideoViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)updateState:(long long)a0;
- (id)container;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)context;

@end
