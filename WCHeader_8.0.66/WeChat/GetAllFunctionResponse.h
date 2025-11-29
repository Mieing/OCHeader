@class NSString, GetAllFunctionResponse_AlertInfo, NSMutableArray, BaseResponse;

@interface GetAllFunctionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *groupList;
@property (retain, nonatomic) NSString *emptyHint;
@property (retain, nonatomic) GetAllFunctionResponse_AlertInfo *alertInfo;

+ (void)initialize;

@end
