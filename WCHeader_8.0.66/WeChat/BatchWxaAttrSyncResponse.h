@class NSMutableArray, BaseResponse;

@interface BatchWxaAttrSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *respInfoList;

+ (void)initialize;

@end
