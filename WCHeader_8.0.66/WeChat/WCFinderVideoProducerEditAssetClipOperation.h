@class MMAssetInfo, OMJClipSegment;

@interface WCFinderVideoProducerEditAssetClipOperation : WCFinderVideoProducerBaseOperation

@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (nonatomic) long long assetIndex;
@property (retain, nonatomic) OMJClipSegment *clipSegment;
@property (nonatomic) long long editAssetClipType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
