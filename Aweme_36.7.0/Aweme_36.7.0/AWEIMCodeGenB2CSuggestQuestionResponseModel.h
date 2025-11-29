@class NSArray, NSString;

@interface AWEIMCodeGenB2CSuggestQuestionResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *questionsArray;
@property (copy, nonatomic) NSString *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
