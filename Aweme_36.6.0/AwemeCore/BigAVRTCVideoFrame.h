@protocol RTCVideoFrameBuffer;

@interface BigAVRTCVideoFrame : NSObject {
    long long _rotation;
    long long _timeStampNs;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) long long rotation;
@property (readonly, nonatomic) long long timeStampNs;
@property (nonatomic) int timeStamp;
@property (readonly, nonatomic) id<RTCVideoFrameBuffer> buffer;

- (id)initWithNativeVideoFrame:(const void *)a0;
- (struct VideoFrame { struct scoped_refptr<avframework::VideoFrameBuffer> { struct VideoFrameBuffer *x0; } x0; unsigned int x1; long long x2; long long x3; int x4; struct ExtraDataInterface *x5; int x6; })nativeVideoFrame;
- (void).cxx_destruct;
- (id)newI420VideoFrame;
- (id)initWithBuffer:(id)a0 rotation:(long long)a1 timeStampNs:(long long)a2;

@end
