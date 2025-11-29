@class NSString;

@interface AWEVisionCameraPerformanceTimestamp : NSObject <AWEVisionCameraPerformanceTimestampStudioProxy>

@property (nonatomic) unsigned long long beginPerformanceTimestamp;
@property (nonatomic) unsigned long long receivedCameraFirstFramePerformanceTimestamp;
@property (nonatomic) unsigned long long firstViewRenderPerformanceTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
