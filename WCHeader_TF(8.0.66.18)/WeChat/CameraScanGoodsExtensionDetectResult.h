@interface CameraScanGoodsExtensionDetectResult : MMObject

@property (nonatomic) BOOL bHasLocalRet;
@property (nonatomic) int numNoBoxesCount;
@property (nonatomic) unsigned int engineTrackRet;

+ (unsigned int)trackResultFromEngineScanRet:(int)a0;

@end
