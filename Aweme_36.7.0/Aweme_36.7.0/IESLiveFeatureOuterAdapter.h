@class NSDictionary;

@interface IESLiveFeatureOuterAdapter : NSObject

@property (retain, nonatomic) NSDictionary *indexMap;
@property (copy, nonatomic) id /* block */ previewIsNoStream;
@property (copy, nonatomic) id /* block */ downLoadSpeed;

- (id)index:(id)a0;
- (id)outerFeature:(id)a0 innerFeature:(id)a1 roomId:(id)a2;
- (id)indexOuterFeature:(id)a0 innerFeature:(id)a1 roomId:(id)a2;
- (void).cxx_destruct;

@end
