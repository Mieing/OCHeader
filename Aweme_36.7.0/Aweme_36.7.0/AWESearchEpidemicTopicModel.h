@class NSString;

@interface AWESearchEpidemicTopicModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *textColorString;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *schemaURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
