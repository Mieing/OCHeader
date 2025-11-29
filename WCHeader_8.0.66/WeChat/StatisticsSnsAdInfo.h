@class NSString;

@interface StatisticsSnsAdInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int adType;
@property (retain, nonatomic) NSString *adPublishId;
@property (retain, nonatomic) NSString *adUxInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatExt;

+ (void)initialize;

- (void)setSnsStatExt:(id)a0;
- (id)snsStatExt;
- (void)setSource:(unsigned int)a0;
- (unsigned int)source;
- (void)setAdUxInfo:(id)a0;
- (id)adUxInfo;
- (void)setAdPublishId:(id)a0;
- (id)adPublishId;
- (void)setAdType:(unsigned int)a0;
- (unsigned int)adType;
- (BOOL)isVaild;

@end
