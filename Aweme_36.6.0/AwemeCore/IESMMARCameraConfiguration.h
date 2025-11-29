@class NSString, ARConfiguration, ARWorldMap;

@interface IESMMARCameraConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) ARConfiguration *innerARConfiguration;
@property (readonly, nonatomic) long long cameraPosition;
@property (nonatomic) BOOL providesAudioData;
@property (copy, nonatomic) NSString *preset;
@property (nonatomic) long long worldAlignment;
@property (readonly, nonatomic) unsigned long long planeDetection;
@property (nonatomic) long long environmentTexturing;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (nonatomic, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled;
@property (readonly, copy, nonatomic) ARConfiguration *arConfig;

+ (BOOL)isSystemVersionSupportedAR;
+ (id)defaultConfiguration;

- (long long)convertToARWorldAlignment:(long long)a0;
- (unsigned long long)convertToARPlaneDetection:(unsigned long long)a0;
- (id)initWithARConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0;
- (BOOL)isSupported;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
