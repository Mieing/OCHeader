@class NSString;

@interface ReserveRecord_Button : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) int status;

+ (id)descriptor;

@end
