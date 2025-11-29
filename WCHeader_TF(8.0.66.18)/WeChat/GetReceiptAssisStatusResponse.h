@class BaseResponse;

@interface GetReceiptAssisStatusResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int isShowItem;
@property (nonatomic) int isSubscribe;

+ (void)initialize;

@end
