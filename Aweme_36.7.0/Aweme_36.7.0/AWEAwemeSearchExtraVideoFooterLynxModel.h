@class NSString, NSDictionary, AWEGeneralSearchPOIAnchorInfoModel;

@interface AWEAwemeSearchExtraVideoFooterLynxModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rawData;
@property (nonatomic) double height;
@property (nonatomic) BOOL clearFootCorner;
@property (nonatomic) long long delayShowTime;
@property (retain, nonatomic) NSDictionary *logDict;
@property (nonatomic) BOOL showLynxImmediately;
@property (copy, nonatomic) NSString *waterfallLayoutSchema;
@property (copy, nonatomic) NSString *anchorType;
@property (retain, nonatomic) AWEGeneralSearchPOIAnchorInfoModel *anchorInfoModel;

+ (id)anchorInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)bindLynxViewWrapper;
- (void).cxx_destruct;

@end
