@class BaseRequest, NSMutableArray;

@interface BatchGetMaterialRecommWxaRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *materialItemList;

+ (void)initialize;

@end
