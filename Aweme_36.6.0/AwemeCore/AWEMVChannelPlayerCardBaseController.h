@class AWEMVChannelPlayerCardBaseContainer, NSString, AWEAwemeModel, AWEMVChannelPlayerCardContext;

@interface AWEMVChannelPlayerCardBaseController : AWEBaseController <AWEMVChannelPlayerCardDispatchProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEMVChannelPlayerCardBaseContainer *view;
@property (readonly, weak, nonatomic) AWEMVChannelPlayerCardContext *context;
@property (nonatomic) BOOL appear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState:(long long)a0;
- (id)container;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)viewController;
- (void)viewDidLoad;

@end
