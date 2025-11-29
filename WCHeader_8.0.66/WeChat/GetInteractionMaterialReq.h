@class BaseRequest, NSString;

@interface GetInteractionMaterialReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *traceId;

+ (void)initialize;

@end
