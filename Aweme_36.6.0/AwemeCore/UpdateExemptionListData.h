@class NSString;

@interface UpdateExemptionListData : IESLivePBBaseMessage

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *errMsg;

+ (id)descriptor;

@end
