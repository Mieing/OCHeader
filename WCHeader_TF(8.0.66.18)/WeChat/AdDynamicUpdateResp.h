@class NSString, NSMutableArray, BaseResponse;

@interface AdDynamicUpdateResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSMutableArray *respDataList;

+ (void)initialize;

@end
