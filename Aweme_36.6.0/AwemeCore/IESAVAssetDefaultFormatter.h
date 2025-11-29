@class NSString;

@interface IESAVAssetDefaultFormatter : NSObject

@property (copy, nonatomic) NSString *keyPrefix;

- (id)formattedValueForKey:(id)a0 ofAVAsset:(id)a1;
- (id)dictWithAssets:(id)a0;
- (void).cxx_destruct;

@end
