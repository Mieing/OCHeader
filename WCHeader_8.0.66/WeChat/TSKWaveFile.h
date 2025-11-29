@interface TSKWaveFile : NSObject {
    struct WaveFile { struct unique_ptr<__sFILE, std::function<void (__sFILE *)>> { struct __compressed_pair<__sFILE *, std::function<void (__sFILE *)>> { struct __sFILE *__value_; struct function<void (__sFILE *)> { struct __value_func<void (__sFILE *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } m_file; BOOL m_readOnly; BOOL m_isReady; int m_fileFormat; unsigned long long m_sampleRate; unsigned long long m_channels; unsigned long long m_totalFrames; unsigned long long m_sampleSize; unsigned long long m_frameStartPos; unsigned long long m_frameRead; unsigned int m_channelMask; double m_duration; } _waveFile;
}

@property (readonly, nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, nonatomic) unsigned long long sampleSize;
@property (readonly, nonatomic) unsigned long long totalFrames;
@property (readonly, nonatomic) unsigned long long framesRead;
@property (readonly, nonatomic) unsigned long long framesRemain;

- (id)initWithFilePath:(id)a0;
- (unsigned long long)readFrames:(int)a0 asS16:(short *)a1;
- (void)seekTo:(int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
