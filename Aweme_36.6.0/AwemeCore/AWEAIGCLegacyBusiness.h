@class AWEAIGCLegacyBusinessContext;
@protocol AWEAIGCLegacyBusinessAfterProcessProtocol, AWEAIGCLegacyBusinessLegacyAIEffectProtocol, AWEAIGCLegacyBusinessAISuitProtocol, AWEAIGCLegacyBusinessAIMultiStyleProtocol, AWEAIGCLegacyBusinessLegacyAsyncQueueProtocol, AWEAIGCLegacyBusinessLegacyLoadingProtocol, AWEAIGCLegacyBusinessLegacyLoraProtocol;

@interface AWEAIGCLegacyBusiness : NSObject

@property (retain, nonatomic) AWEAIGCLegacyBusinessContext *context;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessLegacyAIEffectProtocol> aiEffect;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessLegacyLoraProtocol> lora;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessAIMultiStyleProtocol> multiStyle;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessAISuitProtocol> aiSuit;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessLegacyAsyncQueueProtocol> asyncQueue;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessLegacyLoadingProtocol> loading;
@property (retain, nonatomic) id<AWEAIGCLegacyBusinessAfterProcessProtocol> afterProcess;

- (void)p_setSubBusinesses;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
