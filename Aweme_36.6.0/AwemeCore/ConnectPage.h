@class NSString;

@interface ConnectPage : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
