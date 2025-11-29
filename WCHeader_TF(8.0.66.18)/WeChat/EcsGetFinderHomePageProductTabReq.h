@class BaseRequest, NSString, NSData;

@interface EcsGetFinderHomePageProductTabReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int pageSize;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (void)initialize;

@end
