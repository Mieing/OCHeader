@class NSString;

@interface AWECommentTopTipsOptionContent : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *buttonText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
