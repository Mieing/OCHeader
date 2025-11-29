@interface IESLivePlayerSEIMetaInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) struct IESLivePlayerSEIContourStruct { char *faceInfo; int faceInfoSize; } contourStruct;

@end
