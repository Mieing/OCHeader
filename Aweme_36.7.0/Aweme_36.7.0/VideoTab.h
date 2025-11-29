@class NSString;

@interface VideoTab : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
