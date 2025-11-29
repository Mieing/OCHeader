@protocol AudioPlayPreprocessedDelegate;

@interface WXVoIPAudioPlayPreprocessor : NSObject {
    struct unique_ptr<wxvoipsdk::audio::AudioFrameRingBuffer, std::default_delete<wxvoipsdk::audio::AudioFrameRingBuffer>> { struct __compressed_pair<wxvoipsdk::audio::AudioFrameRingBuffer *, std::default_delete<wxvoipsdk::audio::AudioFrameRingBuffer>> { struct AudioFrameRingBuffer *__value_; } __ptr_; } _ringBuffer;
    struct AudioFrame { void /* function */ **_vptr$AudioFrame; int sample_rate; int channels; int bits; int frame_size_ms; int frame_size_byte; BOOL frame_size_desc_byte; int samples_per_channel; BOOL has_trae_header; unsigned int timestamp_ms; unsigned int timestamp_sample; unsigned short seq_number; int packet_type; int codec_format; int frame_type; int stream_format; unsigned short energy; char *buffer; int data_size; int capacity; BOOL is_buffer_malloc_by_self; } _getDelegateDataHelpBuffer;
}

@property (nonatomic) struct DataBasicDescription { void /* function */ **_vptr$DataBasicDescription; int sample_rate; int channels; int bits; } getDataDescription;
@property (nonatomic) int getDataLengthBytes;
@property (weak, nonatomic) id<AudioPlayPreprocessedDelegate> delegate;

- (void)getData:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a0;
- (struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; })getDelegateDataByRingBuffer:(const struct DataBasicDescription { void /* function */ **x0; int x1; int x2; int x3; } *)a0 length:(int)a1;
- (void)initializeHelpBuffer:(const struct DataBasicDescription { void /* function */ **x0; int x1; int x2; int x3; } *)a0;
- (void)writeToRingBufferFromDelegate:(const struct DataBasicDescription { void /* function */ **x0; int x1; int x2; int x3; } *)a0;
- (void)fillBufferWithBitsFormatedData:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; })a0 dst:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a1;
- (void)resetIfDataDescriptionChanged:(const struct DataBasicDescription { void /* function */ **x0; int x1; int x2; int x3; } *)a0;
- (int)helperBufferLengthBytes:(const struct DataBasicDescription { void /* function */ **x0; int x1; int x2; int x3; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
