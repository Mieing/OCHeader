@class BaseRequest, NSString;

@interface BuildRelationSessionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *ilinkappid;

+ (void)initialize;

@end
