@interface TingAudioRecorderBufferObjcStatic : NSObject

+ (id)convertForFormatKey:(id)a0 buffer:(id)a1;
+ (void)convertToPCMBuffer:(id)a0 callback:(id /* block */)a1 sampleRate:(unsigned int)a2 audioFormat:(unsigned int)a3 channels:(unsigned int)a4;
+ (void)convertToPCMBuffer:(id)a0 callback:(id /* block */)a1 sampleRate:(unsigned int)a2 audioFormat:(unsigned int)a3;
+ (void)convertToPCMBuffer:(id)a0 callback:(id /* block */)a1 sampleRate:(unsigned int)a2;
+ (void)convertToPCMBuffer:(id)a0 callback:(id /* block */)a1;
+ (id)convertAVAudioPCMBufferToNSData:(id)a0;
+ (void)convertPCMBuffer:(id)a0 targetFormat:(id)a1 targetConverter:(id)a2 completionHandler:(id /* block */)a3;

@end
