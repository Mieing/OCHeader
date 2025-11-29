@class NSMutableData;

@interface MMFinderLiveAudioBuffer : NSObject

@property (nonatomic) unsigned long long read;
@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long clearLength;

- (id)output:(unsigned long long)a0;
- (unsigned long long)length;
- (void)append:(id)a0;
- (void).cxx_destruct;

@end
