@interface OVCAudioPCMExtractor : NSObject

+ (void)extractPCMForAudioFileAtPath:(id)a0 outputSettings:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 outputFilePath:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;

@end
