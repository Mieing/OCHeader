@class BaseRequest, NSMutableArray;

@interface GetDynamicCardCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *cardIdList;
@property (nonatomic) int scene;

+ (void)initialize;

@end
