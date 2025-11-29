@class NSString;

@interface HTSLiveDiyGiftCardButton : IESLivePBBaseMessage

@property (nonatomic) int action;
@property (copy, nonatomic) NSString *buttonContent;

+ (id)descriptor;

@end
