@class NSString;

@interface VCABRAudioStream : NSObject <IVCABRAudioStream>

@property (copy, nonatomic, getter=getStreamId) NSString *streamId;
@property (copy, nonatomic, getter=getCodec) NSString *codec;
@property (nonatomic, getter=getSegmentDuration) int segmentDuration;
@property (nonatomic, getter=getBandwidth) int bandwidth;
@property (nonatomic, getter=getSampleRate) int sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
