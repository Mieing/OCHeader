@class NSString;

@interface AWERecommendFeedbackInfo : AWEBaseApiModel

@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *positText;
@property (copy, nonatomic) NSString *negText;
@property (nonatomic) BOOL swap;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
