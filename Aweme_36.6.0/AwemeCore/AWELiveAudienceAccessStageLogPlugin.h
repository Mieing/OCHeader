@class NSString, AWELiveAudienceAccessContext, NSMutableArray;

@interface AWELiveAudienceAccessStageLogPlugin : NSObject <AWELiveAudienceAccessPluginProtocol>

@property (retain, nonatomic) AWELiveAudienceAccessContext *context;
@property (retain, nonatomic) NSMutableArray *stageChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonLogInfo;
- (void)prePullStream;
- (void)stageDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)stringWithStage:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
