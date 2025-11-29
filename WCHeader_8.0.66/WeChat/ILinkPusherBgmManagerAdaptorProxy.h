@class ILinkPusherBgmManagerAdaptor;

@interface ILinkPusherBgmManagerAdaptorProxy : NSProxy

@property (retain, nonatomic) ILinkPusherBgmManagerAdaptor *ilinkPusherBgmManagerAdaptor;

+ (Class)class;

- (id)initWithInstance:(id)a0;
- (void)destroy;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
