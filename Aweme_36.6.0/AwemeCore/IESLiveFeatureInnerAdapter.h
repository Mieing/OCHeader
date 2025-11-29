@class NSDictionary;

@interface IESLiveFeatureInnerAdapter : NSObject

@property (retain, nonatomic) NSDictionary *indexMap;

- (id)innerFeatureForInstance:(id)a0;
- (id)index:(id)a0;
- (id)innerFeature:(id)a0;
- (id)indexInnerFeature:(id)a0;
- (id)indexInnerFeature:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2;
- (void).cxx_destruct;

@end
