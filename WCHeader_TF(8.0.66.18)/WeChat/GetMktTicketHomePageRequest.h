@class BaseRequest;

@interface GetMktTicketHomePageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int reqNum;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (void)initialize;

@end
