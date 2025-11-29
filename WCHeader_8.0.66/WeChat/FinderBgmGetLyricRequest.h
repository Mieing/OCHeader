@class BaseRequest;

@interface FinderBgmGetLyricRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long id;

+ (void)initialize;

@end
