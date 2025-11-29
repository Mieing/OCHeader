@class NSString;

@interface AWEUserRIPModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *textBeforeLink;
@property (retain, nonatomic) NSString *textAfterLink;
@property (retain, nonatomic) NSString *textLink;
@property (retain, nonatomic) NSString *linkUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
