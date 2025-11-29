@class NSString, AWECommentTopTipsOptionContent;

@interface AWECommentTopTipsInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (nonatomic) unsigned long long tipsType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) AWECommentTopTipsOptionContent *optionContent;
@property (copy, nonatomic) NSString *link;

+ (id)optionContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
