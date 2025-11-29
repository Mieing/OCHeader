@class NSString, NSDictionary;

@interface IESFeatureCombineStorageInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *saveKey;
@property (copy, nonatomic) NSDictionary *featuresDict;

- (id)storageKey;
- (void)loadFeatDataIfNeeded;
- (void)saveFeatData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
