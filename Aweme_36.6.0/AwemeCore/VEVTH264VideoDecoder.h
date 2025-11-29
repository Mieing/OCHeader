@interface VEVTH264VideoDecoder : IESMMObject {
    struct OpaqueVTDecompressionSession { } *mDeocderSession;
    struct opaqueCMFormatDescription { } *mDecoderFormatDescription;
    char *pSPS;
    char *pPPS;
    char *pSEI;
    long long mSpsSize;
    long long mPpsSize;
    long long mSeiSize;
    long long mINalCount;
    long long mPBNalCount;
    long long mINalIndex;
    BOOL mIsNeedReinit;
}

- (void)releaseH264HwDecoder;
- (void)removeH264HwDecoder;
- (void)releaseSliceInfo;
- (unsigned long long)analyticalData:(const char *)a0 size:(long long)a1;
- (BOOL)initH264HwDecoder;
- (struct __CVBuffer { } *)decode:(char *)a0 videoSize:(long long)a1 dts:(unsigned int)a2 pts:(unsigned int)a3;
- (int)getNALHeaderLen:(const char *)a0 size:(long long)a1;
- (BOOL)getSliceInfo:(const char *)a0 slice:(char **)a1 size:(long long *)a2 start:(long long)a3 end:(long long)a4;
- (struct __CVBuffer { } *)decodeH264VideoData:(char *)a0 videoSize:(long long)a1 dts:(unsigned int)a2 pts:(unsigned int)a3;
- (id)init;
- (void)dealloc;

@end
