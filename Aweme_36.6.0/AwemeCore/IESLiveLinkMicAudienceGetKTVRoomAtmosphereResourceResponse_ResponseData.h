@class NSString, NSMutableArray;

@interface IESLiveLinkMicAudienceGetKTVRoomAtmosphereResourceResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *admissionPath;
@property (copy, nonatomic) NSString *preludesPath;
@property (copy, nonatomic) NSString *mainPath;
@property (copy, nonatomic) NSString *segmentsPath;
@property (copy, nonatomic) NSString *bridgePath;
@property (copy, nonatomic) NSString *finalePath;
@property (copy, nonatomic) NSString *musicLightEffectsCachePath;
@property (retain, nonatomic) NSMutableArray *segmentsArray;
@property (readonly, nonatomic) unsigned long long segmentsArray_Count;
@property (retain, nonatomic) NSMutableArray *preludesArray;
@property (readonly, nonatomic) unsigned long long preludesArray_Count;
@property (retain, nonatomic) NSMutableArray *bridgeSegmentsArray;
@property (readonly, nonatomic) unsigned long long bridgeSegmentsArray_Count;
@property (retain, nonatomic) NSMutableArray *mainSegmentsArray;
@property (readonly, nonatomic) unsigned long long mainSegmentsArray_Count;
@property (retain, nonatomic) NSMutableArray *finaleSegmentsArray;
@property (readonly, nonatomic) unsigned long long finaleSegmentsArray_Count;
@property (retain, nonatomic) NSMutableArray *admissionSegmentsArray;
@property (readonly, nonatomic) unsigned long long admissionSegmentsArray_Count;

+ (id)descriptor;

@end
