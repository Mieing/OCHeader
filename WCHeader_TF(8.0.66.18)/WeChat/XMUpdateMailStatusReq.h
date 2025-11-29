@class NSMutableArray;

@interface XMUpdateMailStatusReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) NSMutableArray *mailids;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
