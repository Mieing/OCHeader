@interface AWEStudioEditImpl.TarotFlowFactory : HTSService <ACCTarotFlowFactoryProtocol>

- (id)createMemoriesTemplateFlowWithParams:(id)a0;
- (id)createMemoriesAIClipFlowWithParams:(id)a0;
- (id)createTextModeFetchAndApplyTemplateFlowWithParams:(id)a0;
- (id)createTextStickerResourceDownloadFlowWithParams:(id)a0;
- (id)init;

@end
