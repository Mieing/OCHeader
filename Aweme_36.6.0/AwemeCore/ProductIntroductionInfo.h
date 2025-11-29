@class NSString;

@interface ProductIntroductionInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) int fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) int introductionType;

+ (id)descriptor;

- (id)memoryData;
- (id)initWithDict:(id)a0;

@end
