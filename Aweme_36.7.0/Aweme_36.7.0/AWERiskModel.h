@class NSNumber, NSString;

@interface AWERiskModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *voting;
@property (retain, nonatomic) NSNumber *warning;
@property (retain, nonatomic) NSNumber *riskSinking;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *notice;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *postContent;
@property (nonatomic) unsigned long long warnLevel;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
