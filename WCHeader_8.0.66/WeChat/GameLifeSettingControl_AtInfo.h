@interface GameLifeSettingControl_AtInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int atAllFreq;
@property (nonatomic) unsigned int syncAllDelayTime;
@property (nonatomic) unsigned int syncBatchSize;

+ (void)initialize;

- (void)setSyncBatchSize:(unsigned int)a0;
- (unsigned int)syncBatchSize;
- (void)setSyncAllDelayTime:(unsigned int)a0;
- (unsigned int)syncAllDelayTime;
- (void)setAtAllFreq:(unsigned int)a0;
- (unsigned int)atAllFreq;

@end
