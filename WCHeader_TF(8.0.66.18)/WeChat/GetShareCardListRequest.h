@class BaseRequest, NSMutableArray;

@interface GetShareCardListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *cardIds;

+ (void)initialize;

@end
