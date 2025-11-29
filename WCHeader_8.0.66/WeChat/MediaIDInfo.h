@class NSMutableArray;

@interface MediaIDInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int createTime;
@property (nonatomic) long long svrId;
@property (retain, nonatomic) NSMutableArray *suffixIndexs;

+ (void)initialize;

@end
