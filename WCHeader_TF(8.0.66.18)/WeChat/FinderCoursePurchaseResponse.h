@class NSString, NSData, BaseResponse;

@interface FinderCoursePurchaseResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;

+ (void)initialize;

@end
