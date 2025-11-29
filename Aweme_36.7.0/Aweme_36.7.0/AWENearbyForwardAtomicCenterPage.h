@class AWENearbyPageContext, NSString, AWENearbyTabForwardContext, UIViewController;
@protocol AWENearbyTabForwardAblityProtocol, AWENearbyContainerChildProtocol;

@interface AWENearbyForwardAtomicCenterPage : NSObject <AWENearbyForwardAtomicProtocol>

@property (retain, nonatomic) id<AWENearbyTabForwardAblityProtocol> tabForwardImp;
@property (retain, nonatomic) AWENearbyTabForwardContext *context;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;
@property (copy, nonatomic) id /* block */ tabForwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
