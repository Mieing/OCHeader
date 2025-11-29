@class NSArray;

@interface AWEInteractSubBarModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *btns;

+ (id)contentsJSONTransformer;
+ (id)btnsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
