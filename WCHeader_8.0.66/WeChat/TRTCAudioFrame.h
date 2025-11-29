@class NSData;

@interface TRTCAudioFrame : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSData *extraData;

- (id)init;
- (void).cxx_destruct;

@end
