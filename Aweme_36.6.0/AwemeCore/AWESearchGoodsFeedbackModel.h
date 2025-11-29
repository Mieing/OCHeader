@class NSString;

@interface AWESearchGoodsFeedbackModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double padding;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long showIconNum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
