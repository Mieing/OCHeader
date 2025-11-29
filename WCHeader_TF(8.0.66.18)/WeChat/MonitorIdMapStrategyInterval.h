@interface MonitorIdMapStrategyInterval : WXPBGeneratedMessage

@property (nonatomic) unsigned int originalId;
@property (nonatomic) unsigned int heavyUserId;

+ (void)initialize;

- (void)setHeavyUserId:(unsigned int)a0;
- (unsigned int)heavyUserId;
- (void)setOriginalId:(unsigned int)a0;
- (unsigned int)originalId;

@end
