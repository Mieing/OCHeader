@class IESECShopContext, IESECTracker;

@interface IESECRelationPageContext : IESECRelationContextStore

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECShopContext *context;
@property (nonatomic) unsigned long long modal;
@property (nonatomic) unsigned long long screenState;
@property (nonatomic, getter=isLiveMuted) BOOL liveMuted;
@property (nonatomic) BOOL fmpFinished;

- (void)addKey:(id)a0 handler:(id /* block */)a1;
- (void)removeKey:(id)a0 handler:(id /* block */)a1;
- (id)ad_rit;
- (id)ad_logExtraDict;
- (id)ad_logExtra;
- (void)setAd_logExtraDict:(id)a0;
- (id)ad_creativeID;
- (void)setupTrackerWithBusinessParams:(id)a0;
- (void)removeAllHandlersForKey:(id)a0;
- (void)postAllHandlersForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
