@class NSString;

@interface Button : IESLivePBBaseMessage

@property (nonatomic) int subscribeType;
@property (copy, nonatomic) NSString *dateText;

+ (id)descriptor;

@end
