@class NSString;

@interface StatisticsSnsAdInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int adType;
@property (retain, nonatomic) NSString *adPublishId;
@property (retain, nonatomic) NSString *adUxInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *snsStatExt;

+ (void)initialize;

- (BOOL)isVaild;

@end
