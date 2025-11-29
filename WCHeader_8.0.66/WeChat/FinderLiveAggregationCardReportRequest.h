@class NSString, NSData;

@interface FinderLiveAggregationCardReportRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSData *cardBuffer;
@property (nonatomic) unsigned long long actionTimeMs;
@property (nonatomic) unsigned int effectiveExposeTimeMs;
@property (nonatomic) unsigned long long startEffectiveExposeTimeMs;
@property (nonatomic) unsigned int exposeTimeMs;

+ (void)initialize;

@end
