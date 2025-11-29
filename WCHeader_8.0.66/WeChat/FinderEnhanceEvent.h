@interface FinderEnhanceEvent : WXPBGeneratedMessage

@property (nonatomic) unsigned int listenEventType;
@property (nonatomic) float playPercent;
@property (nonatomic) float stayTimeSecond;
@property (nonatomic) unsigned int fastSlipCount;
@property (nonatomic) unsigned int playProgress;

+ (void)initialize;

@end
