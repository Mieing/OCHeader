@class BDByteLinkVideoPlayer, BDByteLinkAudioPlayer, BDCastMediaDecoder, NSString, UIView;

@interface BDCastMediaRender : NSObject <BDCastMediaDecoderDelegate, NSObject> {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } _dumpFilePath;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_videoFile;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_audioFile;
}

@property (retain, nonatomic) BDCastMediaDecoder *mediaDecoder;
@property (retain, nonatomic) BDByteLinkAudioPlayer *audioPlayer;
@property (retain, nonatomic) BDByteLinkVideoPlayer *videoPlayer;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) UIView *renderView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (nonatomic) long long logLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingVideoSize;

- (void)enqueueRemoteVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 rotation:(int)a1 extendedData:(id)a2;
- (void)mediaDecoder:(id)a0 videoSizeDidChangeWithWidth:(int)a1 height:(int)a2 rotation:(int)a3 userId:(id)a4;
- (void)mediaDecoder:(id)a0 imageBuffer:(struct __CVBuffer { } *)a1 pts:(long long)a2 userId:(id)a3;
- (void)mediaDecoder:(id)a0 decodedBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 pts:(long long)a2 userId:(id)a3;
- (void)mediaDecoder:(id)a0 logLevel:(long long)a1 logStr:(id)a2 isLog:(BOOL)a3;
- (id)initWithLogLevel:(long long)a0;
- (void)writeVideoData:(char *)a0 Size:(unsigned long long)a1;
- (void)writeAudioData:(char *)a0 Size:(unsigned long long)a1;
- (void)enqueueLocalVideoPacket:(id)a0 TimeStamp:(long long)a1;
- (void)enqueueAudioPacket:(id)a0 userId:(id)a1 TimeStamp:(long long)a2;
- (void)setParameter:(int)a0 Value:(void *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id).cxx_construct;
- (void)start;

@end
