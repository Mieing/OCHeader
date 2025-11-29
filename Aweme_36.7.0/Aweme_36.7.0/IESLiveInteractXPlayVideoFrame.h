@class NSString;

@interface IESLiveInteractXPlayVideoFrame : NSObject <IESLiveXPlayVideoFrameProtocol>

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) long long rotation;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
