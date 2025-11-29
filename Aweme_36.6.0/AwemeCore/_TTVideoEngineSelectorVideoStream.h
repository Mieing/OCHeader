@class NSString;

@interface _TTVideoEngineSelectorVideoStream : NSObject <IVCABRVideoStream>

@property (nonatomic) int brandWidth;
@property (copy, nonatomic) NSString *codec;
@property (nonatomic) int segmentDuration;
@property (copy, nonatomic) NSString *streamId;
@property (nonatomic) float frameRate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getStreamId;
- (id)getCodec;
- (int)getSegmentDuration;
- (int)getBandwidth;
- (void).cxx_destruct;
- (int)getWidth;
- (int)getHeight;
- (float)getFrameRate;

@end
