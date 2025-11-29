@class AWEPropApplyNormalStrategy, NSString;
@protocol AWEPropApplyContextProtocol;

@interface AWEPropApplyRawTypeStrategy : NSObject <AWEPropApplyStrategyProtocol>

@property (retain, nonatomic) id<AWEPropApplyContextProtocol> context;
@property (retain, nonatomic) AWEPropApplyNormalStrategy *normalApplyStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithApplyContext:(id)a0;
- (void)applyProp:(id)a0;
- (BOOL)canApplyProp:(id)a0;
- (void)preparePropApplyWithProp:(id)a0 currentProp:(id)a1 completion:(id /* block */)a2;
- (id)initWithApplyContext:(id)a0 normalApplyStrategy:(id)a1;
- (void).cxx_destruct;

@end
