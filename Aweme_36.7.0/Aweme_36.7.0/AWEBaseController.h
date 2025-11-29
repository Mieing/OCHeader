@class UIView, NSString, AWEPageContext;
@protocol AWEBaseControllerDIProtocol;

@interface AWEBaseController : NSObject <AWEControllerProtocol>

@property (weak, nonatomic) AWEPageContext *context;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) id container;
@property (weak, nonatomic) id<AWEBaseControllerDIProtocol> DI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
