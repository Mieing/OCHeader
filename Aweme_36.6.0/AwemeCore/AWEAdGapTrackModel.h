@class NSString;

@interface AWEAdGapTrackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) unsigned long long interactiveMask;
@property (nonatomic) unsigned long long lastAd;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long gapNumber;
@property (nonatomic) unsigned long long trackCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastAdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)refresh;

@end
