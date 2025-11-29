@class BaseRequest, NSString;

@interface GetMoreGameListRequest_V2 : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offSet;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) unsigned int gameType;
@property (nonatomic) unsigned int classifyId;
@property (retain, nonatomic) NSString *country;

+ (void)initialize;

@end
