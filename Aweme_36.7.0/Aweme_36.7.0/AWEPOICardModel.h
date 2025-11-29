@class NSString;

@interface AWEPOICardModel : AWEBaseApiModel

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *urlToLoad;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
