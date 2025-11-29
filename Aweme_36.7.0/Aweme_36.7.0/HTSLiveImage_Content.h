@class NSString;

@interface HTSLiveImage_Content : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *alternativeText;

+ (id)descriptor;

- (long long)level;
- (id)alternativeText;
- (void)setAlternativeText:(id)a0;

@end
