@class NSString, IESForestKit;
@protocol BDECRabbiFlyIToaster, BDECRabbiFlyIAppInfoGetter, BDECRabbiFlyIAsserter, BDECRabbiFlyILogger, BDECRabbiFlyIInitAdapter, BDECRabbiFlyITracker, BDECRabbiFlyIBasicActionAbility, BDECRabbiFlyIBridgeAbility;

@interface BDECRabbiFlyInitAdapterWrapper : NSObject <BDECRabbiFlyIInitAdapter>

@property (retain, nonatomic) id<BDECRabbiFlyIInitAdapter> adapter;
@property (retain, nonatomic) id<BDECRabbiFlyIAppInfoGetter> appInfoGetter;
@property (retain, nonatomic) id<BDECRabbiFlyILogger> logger;
@property (retain, nonatomic) id<BDECRabbiFlyITracker> tracker;
@property (retain, nonatomic) id<BDECRabbiFlyIBridgeAbility> bridgeAbility;
@property (retain, nonatomic) id<BDECRabbiFlyIBasicActionAbility> basicActionAbility;
@property (retain, nonatomic) IESForestKit *forestKit;
@property (retain, nonatomic) id<BDECRabbiFlyIAsserter> asserter;
@property (retain, nonatomic) id<BDECRabbiFlyIToaster> toaster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInitAdapter:(id)a0;
- (id)getAppInfoGetter;
- (id)getTracker;
- (id)getBridgeAbility;
- (id)getBasicActionAbility;
- (id)getForestKit;
- (id)getAsserter;
- (id)getToaster;
- (id)getCommonProps;
- (void).cxx_destruct;
- (id)getLogger;

@end
