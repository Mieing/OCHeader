@class FinderGameBindBaseRequest;

@interface FinderGameBindOpRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderGameBindBaseRequest *baseReq;
@property (nonatomic) unsigned int opType;

+ (void)initialize;

@end
