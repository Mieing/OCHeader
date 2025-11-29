@class NSString;

@interface AWESearchNilTextModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *fullString;
@property (retain, nonatomic) NSString *linkString;
@property (retain, nonatomic) NSString *linkURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
