@class NSString;

@interface GetRoomInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long uin;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned int pageNum;

+ (void)initialize;

@end
