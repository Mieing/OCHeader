@class NSData, NSMutableArray, BaseResponse;

@interface GetRemindResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *remind;
@property (retain, nonatomic) NSData *kvPageContext;

+ (void)initialize;

@end
