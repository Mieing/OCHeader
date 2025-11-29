@class NSNumber, NSString, NSDictionary;

@interface AWESearchVideoCommercialGoodModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rawData;
@property (retain, nonatomic) NSDictionary *logDict;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bindLynxViewWrapper;
- (void).cxx_destruct;

@end
