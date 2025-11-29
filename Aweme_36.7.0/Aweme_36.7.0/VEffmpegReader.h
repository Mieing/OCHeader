@class NSError;

@interface VEffmpegReader : IESMMObject {
    struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } *mPacket;
}

@property BOOL finishFlag;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct AVFormatContext { struct AVClass *x0; unsigned long long x1; struct AVInputFormat *x2; struct AVOutputFormat *x3; void *x4; struct AVIOContext *x5; int x6; unsigned int x7; struct AVStream **x8; char x9[1024]; char *x10; long long x11; long long x12; long long x13; unsigned int x14; int x15; int x16; long long x17; long long x18; char *x19; int x20; unsigned int x21; struct AVProgram **x22; int x23; int x24; int x25; unsigned int x26; unsigned int x27; unsigned int x28; struct AVChapter **x29; struct AVDictionary *x30; long long x31; int x32; int x33; struct AVIOInterruptCB { void /* function */ *x0; void *x1; int x2; } x34; int x35; long long x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; int x46; int x47; long long x48; unsigned int x49; int x50; int x51; int x52; int x53; char *x54; char *x55; struct AVFormatInternal *x56; int x57; struct AVCodec *x58; struct AVCodec *x59; struct AVCodec *x60; struct AVCodec *x61; int x62; void *x63; void /* function */ *x64; long long x65; char *x66; int x67; void /* function */ *x68; char *x69; void /* function */ *x70; void /* function */ *x71; char *x72; int x73; void *x74; int x75; int x76; long long x77; long long x78; int x79; int x80; } *fmtContext;
@property (nonatomic) long long duration;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) struct AVStream { int x0; int x1; struct AVCodecContext *x2; void *x3; struct AVFrac { long long x0; long long x1; long long x2; } x4; struct AVRational { int x0; int x1; } x5; long long x6; long long x7; long long x8; int x9; int x10; struct AVRational { int x0; int x1; } x11; struct AVDictionary *x12; struct AVRational { int x0; int x1; } x13; struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } x14; struct AVPacketSideData *x15; int x16; int x17; struct AVRational { int x0; int x1; } x18; struct AVCodecParameters *x19; void *x20; int x21; long long x22; long long x23; long long x24; int x25; int x26; int x27; int x28; struct AVCodecParserContext *x29; void *x30; struct AVProbeData { char *x0; char *x1; int x2; char *x3; } x31; long long x32[17]; struct AVIndexEntry *x33; int x34; unsigned int x35; int x36; int x37; int x38; int x39; long long x40; long long x41; long long x42; long long x43; long long x44; int x45; long long x46; long long x47; int x48; int x49; long long x50[17]; unsigned char x51[17]; long long x52; unsigned char x53; unsigned char x54; int x55; char *x56; struct AVRational { int x0; int x1; } x57; struct FFFrac *x58; struct AVStreamInternal *x59; } *videoStream;
@property (nonatomic) int codec_id;
@property (nonatomic) struct AVRational { int num; int den; } videoTimeBase;
@property (nonatomic) long long firstKeyPts;
@property (nonatomic) int is_nalff;
@property (nonatomic) int nal_length_size;
@property (nonatomic) long long seekPts;
@property (nonatomic) BOOL enableDropFrameOpt;
@property (nonatomic) struct __CFDictionary { } *formatExtensions;
@property (nonatomic) long long videoStreamStartTime;
@property (nonatomic) int mediaSubType;
@property (nonatomic) int videoDelay;
@property (nonatomic) int maxCacheCount;
@property (nonatomic) double frameRate;
@property (nonatomic) BOOL enablepreciseFramePickOpt;
@property (nonatomic) BOOL enablegetMaxReferenceOpt;
@property (nonatomic) BOOL enableSeekOpt2;
@property (nonatomic) BOOL enableSearchAVEntriesOpt;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *vtDesc;
@property (readonly, nonatomic) int maxRefFrames;

- (void)giveupPacket;
- (BOOL)checkEnableDropFrameOpt:(id)a0;
- (BOOL)ffmpegInit:(id)a0;
- (struct opaqueCMFormatDescription { } *)selectFormatDescription:(id)a0;
- (int)createFmtDescription:(char *)a0 extradataSize:(int)a1 width:(int)a2 height:(int)a3;
- (BOOL)initMediaInfo;
- (BOOL)getPacketInfo:(struct AVStream { int x0; int x1; struct AVCodecContext *x2; void *x3; struct AVFrac { long long x0; long long x1; long long x2; } x4; struct AVRational { int x0; int x1; } x5; long long x6; long long x7; long long x8; int x9; int x10; struct AVRational { int x0; int x1; } x11; struct AVDictionary *x12; struct AVRational { int x0; int x1; } x13; struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } x14; struct AVPacketSideData *x15; int x16; int x17; struct AVRational { int x0; int x1; } x18; struct AVCodecParameters *x19; void *x20; int x21; long long x22; long long x23; long long x24; int x25; int x26; int x27; int x28; struct AVCodecParserContext *x29; void *x30; struct AVProbeData { char *x0; char *x1; int x2; char *x3; } x31; long long x32[17]; struct AVIndexEntry *x33; int x34; unsigned int x35; int x36; int x37; int x38; int x39; long long x40; long long x41; long long x42; long long x43; long long x44; int x45; long long x46; long long x47; int x48; int x49; long long x50[17]; unsigned char x51[17]; long long x52; unsigned char x53; unsigned char x54; int x55; char *x56; struct AVRational { int x0; int x1; } x57; struct FFFrac *x58; struct AVStreamInternal *x59; } *)a0 packet:(struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } *)a1 streamtype:(int *)a2;
- (BOOL)packetPtsLessThanSeek:(struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } *)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFrom:(struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } *)a0;
- (struct AVStream { int x0; int x1; struct AVCodecContext *x2; void *x3; struct AVFrac { long long x0; long long x1; long long x2; } x4; struct AVRational { int x0; int x1; } x5; long long x6; long long x7; long long x8; int x9; int x10; struct AVRational { int x0; int x1; } x11; struct AVDictionary *x12; struct AVRational { int x0; int x1; } x13; struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } x14; struct AVPacketSideData *x15; int x16; int x17; struct AVRational { int x0; int x1; } x18; struct AVCodecParameters *x19; void *x20; int x21; long long x22; long long x23; long long x24; int x25; int x26; int x27; int x28; struct AVCodecParserContext *x29; void *x30; struct AVProbeData { char *x0; char *x1; int x2; char *x3; } x31; long long x32[17]; struct AVIndexEntry *x33; int x34; unsigned int x35; int x36; int x37; int x38; int x39; long long x40; long long x41; long long x42; long long x43; long long x44; int x45; long long x46; long long x47; int x48; int x49; long long x50[17]; unsigned char x51[17]; long long x52; unsigned char x53; unsigned char x54; int x55; char *x56; struct AVRational { int x0; int x1; } x57; struct FFFrac *x58; struct AVStreamInternal *x59; } *)findStream:(int *)a0 type:(int)a1;
- (BOOL)initStream:(struct AVStream { int x0; int x1; struct AVCodecContext *x2; void *x3; struct AVFrac { long long x0; long long x1; long long x2; } x4; struct AVRational { int x0; int x1; } x5; long long x6; long long x7; long long x8; int x9; int x10; struct AVRational { int x0; int x1; } x11; struct AVDictionary *x12; struct AVRational { int x0; int x1; } x13; struct AVPacket { struct AVBufferRef *x0; long long x1; long long x2; char *x3; int x4; int x5; int x6; struct AVPacketSideData *x7; int x8; long long x9; long long x10; long long x11; } x14; struct AVPacketSideData *x15; int x16; int x17; struct AVRational { int x0; int x1; } x18; struct AVCodecParameters *x19; void *x20; int x21; long long x22; long long x23; long long x24; int x25; int x26; int x27; int x28; struct AVCodecParserContext *x29; void *x30; struct AVProbeData { char *x0; char *x1; int x2; char *x3; } x31; long long x32[17]; struct AVIndexEntry *x33; int x34; unsigned int x35; int x36; int x37; int x38; int x39; long long x40; long long x41; long long x42; long long x43; long long x44; int x45; long long x46; long long x47; int x48; int x49; long long x50[17]; unsigned char x51[17]; long long x52; unsigned char x53; unsigned char x54; int x55; char *x56; struct AVRational { int x0; int x1; } x57; struct FFFrac *x58; struct AVStreamInternal *x59; } *)a0;
- (long long)getSampleMinDistance:(long long)a0 flags:(int)a1;
- (struct opaqueCMSampleBuffer { } *)readSampleBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 dts:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 outDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 outError:(id *)a3 needDiscard:(BOOL *)a4;
- (long long)getNeighborKeyTimestamp:(long long)a0 flags:(int)a1;
- (id)getAllIFrameTimeStamp;
- (double)getAvgFrameRate;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)seek:(long long)a0;
- (void)stopReader;

@end
