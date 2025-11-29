@class NSString, UIView;
@protocol AnnieLiveBizCardProviderProtocolAdapter, IESHYContainerProtocol;

@interface IESLiveRankListXGlobalModule : IESLiveModule <IESLiveRankListXGlobalModule>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *rankListView;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocolAdapter> annieXCardProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
