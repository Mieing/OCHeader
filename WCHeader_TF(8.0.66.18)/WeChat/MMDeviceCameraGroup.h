@class NSArray;

@interface MMDeviceCameraGroup : NSObject

@property (retain, nonatomic) NSArray *sortedCameraInfoList;
@property (nonatomic) double minDigitalZoomFactor;
@property (nonatomic) double maxDigitalZoomFactor;
@property (nonatomic) double visualFactorScale;

+ (void)_insertCameraInfo:(id)a0 intoSortedList:(id)a1;

- (id)_initWithCameraInfoList:(id)a0;
- (void)_resetCameraGroupWithCameraInfoList:(id)a0;
- (void).cxx_destruct;

@end
