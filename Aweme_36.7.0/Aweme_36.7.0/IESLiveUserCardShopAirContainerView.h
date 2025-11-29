@class NSString, IESLiveUserCardStore, IESLiveDslTemplate;
@protocol IESLiveLynxAirInstanceInterface;

@interface IESLiveUserCardShopAirContainerView : UIView <IESLiveLynxAirLifecycleProtocol>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveDslTemplate *dsl;
@property (retain, nonatomic) id<IESLiveLynxAirInstanceInterface> airInstance;
@property (nonatomic) double start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerDidFirstScreen:(id)a0;
- (id)initWithStore:(id)a0 startTime:(double)a1;
- (void)doTap;
- (void).cxx_destruct;
- (void)setup;
- (id)businessIdentifier;

@end
