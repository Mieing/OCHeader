@class NSString;

@interface BaseComponent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *key;

+ (id)descriptor;

@end
