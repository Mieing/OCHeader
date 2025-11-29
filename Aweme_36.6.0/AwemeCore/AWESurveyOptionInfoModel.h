@class NSNumber, NSString;

@interface AWESurveyOptionInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *optionID;
@property (copy, nonatomic) NSString *richContent;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL extraRequired;
@property (nonatomic) BOOL isDefaultValue;
@property (nonatomic) BOOL needExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
