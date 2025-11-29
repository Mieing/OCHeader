@class NSData, NSString;

@interface CGRTCVideoFrame : NSObject <XPlayRTCVideoFrame>

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) long long rotation;
@property (nonatomic) long long contentType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (retain, nonatomic) NSData *extendedData;
@property (nonatomic) BOOL useSeiPB;
@property (readonly, copy, nonatomic) NSString *seiInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
