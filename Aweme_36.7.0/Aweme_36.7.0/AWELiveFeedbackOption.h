@class NSString;

@interface AWELiveFeedbackOption : AWEBaseApiModel

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long subQuestionId;
@property (nonatomic) BOOL negative;
@property (retain, nonatomic) NSString *toastText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
