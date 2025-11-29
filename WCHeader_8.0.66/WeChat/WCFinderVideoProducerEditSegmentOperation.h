@class NSMutableArray, MJVideoTemplate;

@interface WCFinderVideoProducerEditSegmentOperation : WCFinderVideoProducerBaseOperation

@property (retain, nonatomic) MJVideoTemplate *templateInfo;
@property (retain, nonatomic) NSMutableArray *editAssetClipOperationList;
@property (retain, nonatomic) NSMutableArray *editLaunchMJOperationList;

- (id)initWithTemplateInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)segmentDidFinishEditingAsset:(id)a0 withClipSegment:(id)a1 atIndex:(long long)a2;
- (void)segmentDidCancelEditingAsset:(id)a0 withClipSegment:(id)a1 atIndex:(long long)a2;
- (void)segmentDidLaunchMJApp;
- (void)_recordEditAssetClipOperationWithAsset:(id)a0 clipSegment:(id)a1 atIndex:(long long)a2 forType:(long long)a3;
- (void).cxx_destruct;

@end
