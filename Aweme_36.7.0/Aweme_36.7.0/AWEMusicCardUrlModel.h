@class NSString, NSArray;

@interface AWEMusicCardUrlModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) NSString *templatePrefix;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
