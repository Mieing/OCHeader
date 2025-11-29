@class BaseRequest, NSMutableArray;

@interface StatusGetIconConfigListCgiReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned long long coverAgendaKey;
@property (nonatomic) unsigned long long keyValueConfigKey;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSMutableArray *iconConfigIdKeys;

+ (void)initialize;

@end
