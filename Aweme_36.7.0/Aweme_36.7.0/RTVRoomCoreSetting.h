@class RTVLiveCoreCommonParams;

@interface RTVRoomCoreSetting : JSONModel

@property (nonatomic) long long videoCaptureOutputHeight;
@property (nonatomic) long long videoCaptureOutputWidth;
@property (nonatomic) long long videoCaptureOutputFPS;
@property (retain, nonatomic) RTVLiveCoreCommonParams *rtcBase;
@property (nonatomic) long long videoCaptureOutputBitRate;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
