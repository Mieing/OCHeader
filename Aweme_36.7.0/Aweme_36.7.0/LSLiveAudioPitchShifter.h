@interface LSLiveAudioPitchShifter : NSObject {
    struct unique_ptr<mammon::NonRealtimePitchShifterFactory, std::default_delete<mammon::NonRealtimePitchShifterFactory>> { struct __compressed_pair<mammon::NonRealtimePitchShifterFactory *, std::default_delete<mammon::NonRealtimePitchShifterFactory>> { struct NonRealtimePitchShifterFactory *__value_; } __ptr_; } _factory;
    struct unique_ptr<mammon::NonRealtimeEffect, std::default_delete<mammon::NonRealtimeEffect>> { struct __compressed_pair<mammon::NonRealtimeEffect *, std::default_delete<mammon::NonRealtimeEffect>> { struct NonRealtimeEffect *__value_; } __ptr_; } _processor;
    void *bus_array;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data1;
    struct unique_ptr<float[], std::default_delete<float[]>> { struct __compressed_pair<float *, std::default_delete<float[]>> { float *__value_; } __ptr_; } _data2;
    float *_inData[2];
    struct vector<mammon::Bus, std::allocator<mammon::Bus>> { struct Bus *__begin_; struct Bus *__end_; struct __compressed_pair<mammon::Bus *, std::allocator<mammon::Bus>> { struct Bus *__value_; } __end_cap_; } _input_bus;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _srcQueue;
}

@property (copy, nonatomic) id /* block */ audiobufferCallback;

- (id)initWithSample:(int)a0 channels:(int)a1;
- (void)processAudioData:(short *)a0 dataSize:(unsigned int)a1 channels:(int)a2 inNumberFrames:(unsigned int)a3 isEndFrame:(BOOL)a4;
- (void)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1 isEndFrame:(BOOL)a2;
- (void).cxx_destruct;
- (void)setPitch:(double)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
