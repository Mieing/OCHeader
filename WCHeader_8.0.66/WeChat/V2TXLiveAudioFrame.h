@class NSData;

@interface V2TXLiveAudioFrame : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;
@property (nonatomic) unsigned long long timestamp;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
