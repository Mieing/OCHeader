@class NSString, NSNumber;

@interface AWESearchPOIFilterRenderInfoModel : AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel

@property (copy, nonatomic) NSString *strBGStartColorHEX;
@property (copy, nonatomic) NSString *strBGEndColorHEX;
@property (copy, nonatomic) NSNumber *topCornerRadius;

+ (BOOL)usePOISearchFilterRenderInfoModelClassWithJSONDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
