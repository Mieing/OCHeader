@class NSString;

@interface Word : IESLivePBBaseMessage

@property (nonatomic) int id_p;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL isExceededAddition;

+ (id)descriptor;

@end
