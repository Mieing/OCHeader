@class NSString;

@interface ACCCameraScanQRCodePerformanceTimestamp : NSObject <ACCCameraScanQRCodePerformanceTimestampStudioProxy>

@property (nonatomic) unsigned long long scanAlgorithmOpenTimestamp;
@property (nonatomic) unsigned long long switchTabInitTimestamp;
@property (nonatomic) unsigned long long fetchCameraScanQRCodeResultTimestamp;
@property (nonatomic) double vesdkAlgorithmHandleFramePerSecond;
@property (nonatomic) unsigned long long vesdkAlgorithmIdentifyDurationQrcode;
@property (nonatomic) unsigned long long vesdkAlgorithmIdentifyDurationNotQrcode;
@property (nonatomic) unsigned long long vesdkAlgorithmInitDuration;
@property (nonatomic) unsigned long long vesdkAlgorithmSendFrameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
