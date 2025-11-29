@class NSString;

@interface AWESearchSugIconTextModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long contentSize;
@property (nonatomic) long long corner;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
