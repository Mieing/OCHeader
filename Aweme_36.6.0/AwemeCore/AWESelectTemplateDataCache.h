@class NSMutableDictionary;

@interface AWESelectTemplateDataCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *templateDict;
@property (retain, nonatomic) NSMutableDictionary *templateAssetDict;

- (void)setCacheForkey:(id)a0 withTemplateManager:(id)a1 templateAsset:(id)a2;
- (id)dataCacheForTemplate:(id)a0;
- (id)assetsArrayForTemplate:(id)a0;
- (void).cxx_destruct;

@end
