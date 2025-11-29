@class NSArray, NSMutableSet;

@interface IESLLPOIDetailFastWakeUpExtension : IESLLPOIBaseExtension

@property (nonatomic) BOOL enableFastWakeUp;
@property (nonatomic) float fastWakeUpDelay;
@property (copy, nonatomic) NSArray *fastWakeUpCardTags;
@property (copy, nonatomic) NSArray *fastWakeUpIgnoreCardTags;
@property (retain, nonatomic) NSMutableSet *hasSizeChangedCardTags;
@property (nonatomic) BOOL hasChunkForFMPEnd;
@property (nonatomic) BOOL hasWakeUpCards;
@property (nonatomic) double wakeUpStartTime;

- (void)didLoadPageModel:(id)a0;
- (void)initializeExtension;
- (void)setUpFastWakeUpConfig;
- (void)didTemplateReceiveSizeChangeWithTag:(id)a0;
- (BOOL)isFirstScreenLoadNode:(id)a0;
- (void)notifyWakeUpCards;
- (void).cxx_destruct;

@end
