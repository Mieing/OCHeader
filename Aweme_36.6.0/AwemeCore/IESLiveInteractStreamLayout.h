@class NSString, NSArray, NSDictionary, NSData, IESLiveInteractSpatialAudioPosition, IESLiveInteractSpatialAudioHumanOrientation;

@interface IESLiveInteractStreamLayout : NSObject

@property (nonatomic) long long canvasWidth;
@property (nonatomic) long long canvasHeight;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSArray *regions;
@property (copy, nonatomic) NSString *appData;
@property (copy, nonatomic) NSArray *secondRegions;
@property (copy, nonatomic) NSDictionary *secondSEI;
@property (retain, nonatomic) NSData *seiInfo;
@property (copy, nonatomic) NSArray *mixAfterRegions;
@property (copy, nonatomic) NSString *publicStreamId;
@property (nonatomic) BOOL enableSpatialRender;
@property (retain, nonatomic) IESLiveInteractSpatialAudioPosition *position;
@property (retain, nonatomic) IESLiveInteractSpatialAudioHumanOrientation *humanOrientation;
@property (nonatomic) BOOL isPreMixEnabled;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
