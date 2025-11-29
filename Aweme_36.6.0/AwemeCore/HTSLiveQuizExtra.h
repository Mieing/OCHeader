@class NSArray, NSString;

@interface HTSLiveQuizExtra : IESLivePBBaseMessage

@property (retain, nonatomic) NSArray *infosArray;
@property (copy, nonatomic) NSString *quizInfos;

+ (id)descriptor;

@end
