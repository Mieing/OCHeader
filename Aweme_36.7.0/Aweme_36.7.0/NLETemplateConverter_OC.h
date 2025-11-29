@protocol NLETemplatePreHandlerProtocol;

@interface NLETemplateConverter_OC : NSObject

@property (weak, nonatomic) id<NLETemplatePreHandlerProtocol> preHandler;

+ (id)normalizeDraft:(id)a0 preHandler:(id)a1;
+ (BOOL)checkUnsupportFeature:(id)a0;

- (id)initWithDraft:(id)a0 parentTemplateID:(id)a1 resourceFolder:(id)a2;
- (void)setUnMutableVideoSlot:(id)a0;
- (void)setUnMutableVideoSlot:(id)a0 needCompress:(BOOL)a1;
- (void)storeToZipWithZipFolder:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)storeToZipSync:(id)a0;
- (void).cxx_destruct;

@end
