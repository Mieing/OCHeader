@class NSString, NSMutableArray, BaseResponse;

@interface BizGetActionInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSMutableArray *xmlList;

+ (void)initialize;

@end
