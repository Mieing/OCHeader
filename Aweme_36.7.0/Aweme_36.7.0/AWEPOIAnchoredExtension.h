@class NSArray, NSString, NSDictionary, NSMutableArray;

@interface AWEPOIAnchoredExtension : AWEPOIBaseExtension

@property (nonatomic) BOOL hasBeenAnchored;
@property (retain, nonatomic) NSArray *anchoredNodeTags;
@property (copy, nonatomic) NSString *anchoredNodeTag;
@property (nonatomic) BOOL hasReceiveLastChunkData;
@property (copy, nonatomic) NSDictionary *poiAnchoredDelayedTime;
@property (retain, nonatomic) NSMutableArray *nodeTags;

- (void)didEndParseData:(id)a0 error:(id)a1;
- (void)initializeExtension;
- (id)constData;
- (void)scrollNodeIfNeedWithDelayMilliSeconds:(long long)a0;
- (BOOL)isLastChunk:(id)a0;
- (void)anchoredToTargetNode;
- (void)enterFullScreenDelayMilliSeconds:(long long)a0;
- (id)lastChunkName;
- (void).cxx_destruct;

@end
