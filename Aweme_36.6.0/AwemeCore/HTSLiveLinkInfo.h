@class NSString;

@interface HTSLiveLinkInfo : IESLivePBBaseMessage

@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *linkURL;

+ (id)descriptor;

@end
