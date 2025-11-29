@class NSString, NSMutableArray, BaseResponse;

@interface GetLastestExpressInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *expressList;
@property (nonatomic) unsigned int expressCount;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
