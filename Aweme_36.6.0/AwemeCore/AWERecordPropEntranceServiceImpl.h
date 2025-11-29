@protocol IESServiceProvider;

@interface AWERecordPropEntranceServiceImpl : NSObject <FPDependentInitable>

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;

- (id)getServerEffectLabels:(id)a0;
- (void)uploadByteBenchFeature:(id)a0;
- (void)updateDyanmicIconStatus:(id)a0;
- (void)trackPropButtonClicked;
- (void)trackSendGiftClickStickerBtn:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
