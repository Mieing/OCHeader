@class NSArray, ARFrame;

@interface IESMMARFrameInfo : IESMMSampleBufferInfo

@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } intrinsics;
@property (nonatomic) long long trackingState;
@property (retain, nonatomic) NSArray *anchors;
@property (retain, nonatomic) id lightEstimate;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) unsigned long long rawFeaturePointsCount;
@property (retain, nonatomic) ARFrame *frame;

- (void).cxx_destruct;

@end
