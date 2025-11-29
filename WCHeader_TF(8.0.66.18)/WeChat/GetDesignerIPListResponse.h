@class NSData, NSMutableArray, BaseResponse;

@interface GetDesignerIPListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *context;
@property (retain, nonatomic) NSMutableArray *ipsetList;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
