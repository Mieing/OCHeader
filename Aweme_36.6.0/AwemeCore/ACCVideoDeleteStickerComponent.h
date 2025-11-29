@class NSString;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCVideoDeleteStickerComponent : ACCFeatureComponent <ACCSequenceMediaContentViewProvider>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
