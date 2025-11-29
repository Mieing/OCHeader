@class NSString, NSMutableArray;

@interface GetAdsResult : WXPBGeneratedMessage

@property (nonatomic) unsigned int ret;
@property (retain, nonatomic) NSString *msg;
@property (nonatomic) unsigned long long expireTime;
@property (retain, nonatomic) NSMutableArray *ads;

+ (void)initialize;

@end
