@class NSString;

@interface AWEGuideWordModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *word;
@property (retain, nonatomic) NSString *searchWord;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
