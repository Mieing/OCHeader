@class NSString;
@protocol IESLiveAnchorStrategyFactorDealProtocol, IESLiveStrategyService, IESLiveAnchorFactorDealWrapperDelegate;

@interface IESLiveAnchorStrategyFactorCommonDealWrapper : NSObject <IESLiveStrategyEventDispatcherObserver>

@property (retain, nonatomic) id<IESLiveAnchorStrategyFactorDealProtocol> model;
@property (weak, nonatomic) id<IESLiveStrategyService> service;
@property (weak, nonatomic) id<IESLiveAnchorFactorDealWrapperDelegate> delegate;
@property (retain, nonatomic) id lastValue;
@property (nonatomic) BOOL isUpdated;
@property (retain, nonatomic) id lastRealValue;
@property (nonatomic) BOOL isLastContrasted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)eventDispatcherWillDispatchValue:(id)a0 withFactorKey:(id)a1;
- (void)contrastedDispatchWithFactor:(id)a0;
- (void)addObserverForService:(id)a0;
- (BOOL)value:(id)a0 isEqualTo:(id)a1;
- (BOOL)needUpdateWithValue:(id)a0;
- (BOOL)isInvalidValue:(id)a0;
- (void)resetStatus;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver;

@end
