@class BaseRequest;

@interface GetMktCardHomePageV2Request : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int reqNum;

+ (void)initialize;

@end
