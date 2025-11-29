@class NSString, NSDictionary;

@interface BDPCommonAudioModel : BDPBasePluginModel

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) double buffered;
@property (nonatomic) BOOL paused;
@property (copy, nonatomic) NSString *src;
@property (nonatomic) unsigned long long referrerPolicy;
@property (nonatomic) double volume;
@property (nonatomic) double playbackRate;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (nonatomic) BOOL isInPkg;
@property (nonatomic) BOOL isInvalidSrc;
@property (readonly, copy, nonatomic) NSString *relativeSrc;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (id)getPulbicPropertyList;
- (void).cxx_destruct;
- (id)init;

@end
