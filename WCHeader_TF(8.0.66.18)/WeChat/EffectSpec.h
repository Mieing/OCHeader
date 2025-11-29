@class NSString;

@interface EffectSpec : NSObject

@property (readonly, nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) unsigned long long maximumBlockSize;
@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, copy, nonatomic) NSString *irFilesDirPath;

- (id)InitWithSampleRate:(unsigned long long)a0 channels:(unsigned long long)a1 maximumBlockSize:(unsigned long long)a2;
- (id)InitWithSampleRate:(unsigned long long)a0 channels:(unsigned long long)a1 maximumBlockSize:(unsigned long long)a2 irFilesDirPath:(id)a3;
- (void).cxx_destruct;

@end
