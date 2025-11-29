@class NSString;

@interface AWERebindMobileIndexPageModel : AWEBaseApiModel

@property (nonatomic) BOOL isNewProcess;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
