@class NSString, IESECSKUSchemaBuilder;

@interface IESECVideoOpenSKUAbility : NSObject <IESECVideoOpenSKUAbilityService>

@property (copy, nonatomic) NSString *serverSchema;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESECSKUSchemaBuilder *builder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithServerSchema:(id)a0 scene:(unsigned long long)a1;

- (id /* block */)sourceBtmToken;
- (id /* block */)maskBackgroundColor;
- (id)initWithServerSchema:(id)a0 scene:(unsigned long long)a1;
- (BOOL)enableBizSchemaReport;
- (void)diffOpenSKUWithServerSchema:(id)a0 finalSchema:(id)a1;
- (id /* block */)generateFinalSchema;
- (id /* block */)defaultSpecID;
- (id /* block */)passThroughTrackClient;
- (id /* block */)passThroughEntranceInfo;
- (void).cxx_destruct;
- (id /* block */)actionType;
- (id /* block */)sessionID;
- (id /* block */)defaultCount;

@end
