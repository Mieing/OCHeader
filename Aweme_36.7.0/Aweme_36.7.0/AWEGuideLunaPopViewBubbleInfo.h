@class NSString, NSArray;

@interface AWEGuideLunaPopViewBubbleInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *coverUrlsArray;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
