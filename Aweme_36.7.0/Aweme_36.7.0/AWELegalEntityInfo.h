@class NSString, NSArray;

@interface AWELegalEntityInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) NSArray *contentLinkList;

+ (id)contentLinkListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
