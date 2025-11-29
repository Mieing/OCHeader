@class NSString;

@interface VCABRVideoStream : NSObject <IVCABRVideoStream>

@property (copy, nonatomic, getter=getStreamId) NSString *streamId;
@property (copy, nonatomic, getter=getCodec) NSString *codec;
@property (nonatomic, getter=getSegmentDuration) int segmentDuration;
@property (nonatomic, getter=getWidth) int width;
@property (nonatomic, getter=getHeight) int height;
@property (nonatomic, getter=getFrameRate) int frameRate;
@property (nonatomic, getter=getBandwidth) int bandwidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
