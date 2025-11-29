@class NSString;

@interface HTSLiveInputDefaultConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *firstLevelText;
@property (copy, nonatomic) NSString *secondLevelText;

+ (id)descriptor;

@end
