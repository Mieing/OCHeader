@class NSString;

@interface ProfitGameConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *gameAppId;
@property (copy, nonatomic) NSString *gameExtra;

+ (id)descriptor;

@end
