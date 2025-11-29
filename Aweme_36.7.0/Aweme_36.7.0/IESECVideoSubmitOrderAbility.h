@class NSString, IESECBuyNowSchemaBuilder;

@interface IESECVideoSubmitOrderAbility : NSObject <IESECVideoSubmitOrderAbilityService>

@property (copy, nonatomic) NSString *serverSchema;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESECBuyNowSchemaBuilder *builder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithServerSchema:(id)a0 scene:(unsigned long long)a1;

- (id /* block */)sourceBtmToken;
- (id /* block */)entranceInfo;
- (id /* block */)maskBackgroundColor;
- (id /* block */)comboNum;
- (id /* block */)promiseType;
- (id /* block */)comboID;
- (id /* block */)customPropertyList;
- (id /* block */)salePackageList;
- (id)initWithServerSchema:(id)a0 scene:(unsigned long long)a1;
- (BOOL)enableBizSchemaReport;
- (id /* block */)generateFinalSchema;
- (id /* block */)defaultSpecID;
- (id /* block */)passThroughTrackClient;
- (id /* block */)passThroughEntranceInfo;
- (id /* block */)pageInitTimestamp;
- (id /* block */)submitOrderAdInfo;
- (id /* block */)CJInfo;
- (void)diffSubmitOrderWithServerSchema:(id)a0 finalSchema:(id)a1;
- (void).cxx_destruct;
- (id /* block */)sessionID;
- (id /* block */)defaultCount;

@end
