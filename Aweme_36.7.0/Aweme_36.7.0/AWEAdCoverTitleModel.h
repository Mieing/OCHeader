@class NSString;

@interface AWEAdCoverTitleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *webURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
