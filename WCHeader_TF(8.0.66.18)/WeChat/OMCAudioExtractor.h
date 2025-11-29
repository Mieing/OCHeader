@interface OMCAudioExtractor : NSObject

+ (BOOL)extractPCMWithFilePath:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 sampleRate:(unsigned long long)a2 sampleFormat:(unsigned long long)a3 channelCount:(unsigned long long)a4 progressHandler:(id /* block */)a5 pcmFrameHandler:(id /* block */)a6;

@end
