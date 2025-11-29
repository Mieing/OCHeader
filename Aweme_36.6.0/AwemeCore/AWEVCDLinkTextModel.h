@class NSString, AWEURLModel;

@interface AWEVCDLinkTextModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *link;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;

- (void).cxx_destruct;

@end
