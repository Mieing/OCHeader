@class UIView;
@protocol AnnieLiveBizCardProviderProtocolAdapter, IESHYContainerProtocol;

@interface IESLiveRevenueDynamicCounterFactory : NSObject

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocolAdapter> annieXCardProvider;

+ (id)shareInstance;

- (id)getReuseContainer:(id)a0 delegate:(id)a1 lazyLoadServiceKeys:(id)a2;
- (id)createContainer:(id)a0 delegate:(id)a1 lazyLoadServiceKeys:(id)a2;
- (void)destroyDynamicCounter;
- (void).cxx_destruct;

@end
