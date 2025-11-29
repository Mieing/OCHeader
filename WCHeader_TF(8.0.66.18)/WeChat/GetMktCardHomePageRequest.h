@class BaseRequest;

@interface GetMktCardHomePageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int reqNum;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int sortRule;

+ (void)initialize;

@end
