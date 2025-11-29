@class NSString, NSArray, NSData, IESLiveLinkSpatialAudioHumanOrientation, IESLiveLinkSpatialAudioPosition;

@interface IESLiveLinkRTCInteractVideoCompositingLayout : NSObject

@property (nonatomic) long long canvasWidth;
@property (nonatomic) long long canvasHeight;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSArray *regions;
@property (copy, nonatomic) NSString *appData;
@property (copy, nonatomic) NSArray *secondRegions;
@property (copy, nonatomic) NSArray *mixAfterRegions;
@property (readonly, retain, nonatomic) NSData *seiInfo;
@property (nonatomic) BOOL enableSpatialRender;
@property (retain, nonatomic) IESLiveLinkSpatialAudioPosition *audienceSpatialPosition;
@property (retain, nonatomic) IESLiveLinkSpatialAudioHumanOrientation *audienceSpatialOrientation;
@property (nonatomic) long long fillMode;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *publicStreamId;
@property (copy, nonatomic) NSString *taskID;

- (BOOL)compareExtraInfoWithCompositingLayout:(id)a0;
- (BOOL)compareWithCompositingLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
