@interface TXCCodecUtils : NSObject

+ (BOOL)isIFrame:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)encodedDataFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 isIFrame:(BOOL)a1 isAnnexB:(BOOL)a2 isHevc:(BOOL)a3;
+ (int)txcGetHevcParameterSetAtIndex:(struct opaqueCMFormatDescription { } *)a0 Index:(unsigned long long)a1 PointOut:(const char **)a2 SizeOut:(unsigned long long *)a3 SizeCount:(unsigned long long *)a4 NalLength:(int *)a5;
+ (id)parameterSetDataFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 isAnnexB:(BOOL)a1 isHevc:(BOOL)a2;
+ (id)parameterSetsFromNalus:(id)a0 forHevc:(BOOL)a1;
+ (BOOL)isParameterSetsComplete:(id)a0 forHevc:(BOOL)a1;
+ (struct opaqueCMSampleBuffer { } *)avccBufferFromEncodedNals:(id)a0 format:(struct opaqueCMFormatDescription { } *)a1 pts:(unsigned long long)a2;
+ (id)annexBNalusFrom:(const char *)a0 length:(unsigned long long)a1;
+ (const char *)searchNalStartFrom:(const char *)a0 length:(long long)a1 startCodeLen:(long long *)a2;
+ (long long)h264NalTypeFromValue:(const char *)a0;
+ (long long)h265NalTypeFromValue:(const char *)a0;

@end
