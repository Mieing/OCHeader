@class AWEAIMattingStickerHandler;
@protocol ACCStickerServiceProtocol, ACCEditServiceProtocol;

@interface AWEAIMattingStickerComponent : ACCFeatureComponent

@property (retain, nonatomic) AWEAIMattingStickerHandler *AIMattingStickerHandler;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;

- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
