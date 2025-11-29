@class NSString;

@interface AwemeVideoDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *awemeStruct;
@property (nonatomic) int status;

+ (id)descriptor;

@end
