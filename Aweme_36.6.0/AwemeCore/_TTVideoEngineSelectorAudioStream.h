@class NSString;

@interface _TTVideoEngineSelectorAudioStream : NSObject <IVCABRAudioStream>

@property (nonatomic) int brandWidth;
@property (copy, nonatomic) NSString *codec;
@property (nonatomic) int segmentDuration;
@property (copy, nonatomic) NSString *streamId;
@property (nonatomic) int sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getSampleRate;
- (id)getStreamId;
- (id)getCodec;
- (int)getSegmentDuration;
- (int)getBandwidth;
- (void).cxx_destruct;

@end
