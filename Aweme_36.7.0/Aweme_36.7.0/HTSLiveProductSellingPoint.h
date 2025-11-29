@class NSString;

@interface HTSLiveProductSellingPoint : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long originalValue;

+ (id)descriptor;

@end
