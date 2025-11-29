@interface AACEncoderAppleImpl2 : NSObject {
    struct OpaqueAudioConverter { } *converterRef_;
    struct AudioEncodeParams { int num_channels; int sample_rate; int frame_length_ms; int bits_per_channel; int bitrate_bps; int encode_format; int encode_mode; int bitrate_mode; BOOL inbandfec_enabled; int dtx_interval_ms; int profile; } params_;
    struct CopyOnWriteBuffer { struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> { void *ptr_; } buffer_; unsigned long long offset_; unsigned long long size_; } buffer_;
    unsigned int current_bitrate_bps_;
}

- (id)init;
- (void)dealloc;
- (void)disposeConverter;
- (BOOL)createAudioConverterWithParams:(const struct AudioEncodeParams { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; BOOL x8; int x9; int x10; } *)a0;
- (unsigned int)getProperBitrate:(int)a0 channels:(int)a1 inputBitrateBps:(int)a2;
- (BOOL)setBitrateInBPS:(unsigned long long)a0;
- (int)Encode:(struct span<const unsigned char, 18446744073709551615UL> { unsigned long long x0; char *x1; })a0;
- (struct shared_ptr<liteav::audio::AudioFrame> { struct AudioFrame *x0; struct __shared_weak_count *x1; })encodeAudioFrame:(struct shared_ptr<liteav::audio::AudioFrame> { struct AudioFrame *x0; struct __shared_weak_count *x1; })a0;
- (unsigned long long)frameLengthInBytes;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
