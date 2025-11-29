@class NSString, NSMutableArray;

@interface AWELiveFeedbackQuestion : AWEBaseApiModel

@property (retain, nonatomic) NSString *questionKey;
@property (retain, nonatomic) NSString *questionText;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic) long long questionId;

+ (id)optionsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
