@class NSString, AWEDetailPropViewModel, AWEDetailPropEmptyView, UIViewController;
@protocol AWEDetailPropEmptyPageHost;

@interface AWEDetailPropEmptyPageHandler : NSObject <AWEDetailBusinessHandlerProtocol>

@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (weak, nonatomic) UIViewController<AWEDetailPropEmptyPageHost> *host;
@property (retain, nonatomic) AWEDetailPropEmptyView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
