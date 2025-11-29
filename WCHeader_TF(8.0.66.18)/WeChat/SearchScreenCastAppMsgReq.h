@class NSString;

@interface SearchScreenCastAppMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizusername;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int reqCount;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *context;

+ (void)initialize;

@end
