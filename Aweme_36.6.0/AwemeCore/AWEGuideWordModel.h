@class NSString;

@interface AWEGuideWordModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *word;
@property (retain, nonatomic) NSString *searchWord;
@property (nonatomic) long long type;
@property (nonatomic) long long breatheTimes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
