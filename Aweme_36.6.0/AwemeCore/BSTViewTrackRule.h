@class NSString, BSTViewTrackEvents;

@interface BSTViewTrackRule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSString *trackModelName;
@property (retain, nonatomic) BSTViewTrackEvents *events;
@property (nonatomic) double exposureScale;
@property (nonatomic) BOOL exposureRepeatedly;
@property (nonatomic) BOOL antiClickShake;
@property (nonatomic) float antiClickShakeDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
