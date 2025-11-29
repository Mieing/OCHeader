@class NSString, AWEGrouponPageContext, AWEGrouponTabForwardContext, UIViewController;
@protocol AWENearbyTabForwardAblityProtocol, AWEGrouponContainerChildProtocol;

@interface AWEGrouponForwardAtomicCenterPage : NSObject <AWEGrouponForwardAtomicProtocol>

@property (retain, nonatomic) id<AWENearbyTabForwardAblityProtocol> tabForwardImp;
@property (retain, nonatomic) AWEGrouponTabForwardContext *context;
@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWEGrouponContainerChildProtocol> *c2ViewController;
@property (copy, nonatomic) id /* block */ tabForwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
