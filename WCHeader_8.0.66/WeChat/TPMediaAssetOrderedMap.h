@class NSMutableString;

@interface TPMediaAssetOrderedMap : TPMediaAssetObjectParam

@property (copy, nonatomic) NSMutableString *orderedMap;

- (id)init;
- (void)addStringValue:(id)a0 forKey:(id)a1;
- (id)stringValue;
- (void).cxx_destruct;

@end
