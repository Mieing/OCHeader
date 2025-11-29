@class NSArray, NSString, KSAudioDataProvider, NSData;

@interface lzAudioFile : NSObject <KSAudioFileProtocol> {
    struct OpaqueAudioFileID { } *_fileID;
    unsigned int _bitRate;
    long long _dataOffset;
    unsigned long long _packetCnt;
    struct AudioStreamPacketDescription { long long mStartOffset; unsigned int mVariableFramesInPacket; unsigned int mDataByteSize; } _packetDes[16];
}

@property (retain, nonatomic) KSAudioDataProvider *audioDataProvider;
@property (nonatomic) BOOL bParsingNoData;
@property (nonatomic) BOOL bWatingForData;
@property (nonatomic) struct OpaqueAudioConverter { } *audioConverter;
@property (nonatomic) void *audioBuf;
@property (nonatomic) unsigned int audioBufSize;
@property (nonatomic) unsigned int outputSizePerPacket;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int audioFileId;
@property (retain, nonatomic) NSArray *audioFileTypes;
@property (nonatomic) void *seekAudioBuf;
@property (nonatomic) BOOL isEof;
@property (nonatomic) long long lastReadingPos;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } fileFormat;
@property (readonly, nonatomic) unsigned int maxPacketSize;
@property (readonly, nonatomic) unsigned int databytesPerSecond;
@property (readonly, nonatomic) long long curPacketOffset;
@property (retain, nonatomic) NSData *magicCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithDataProvider:(id)a0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)outputDes;
- (void)close;
- (BOOL)isOpened;
- (BOOL)open:(id *)a0;
- (BOOL)seekPacketPos:(double)a0;
- (int)readPacket:(void *)a0 bytes:(unsigned int *)a1 packets:(unsigned int *)a2 des:(struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a3;
- (BOOL)readPCMPacket:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 buffer:(void *)a1 bytes:(unsigned int *)a2 packets:(unsigned int *)a3 err:(id *)a4;
- (BOOL)createLPCMAudioConvertor:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 error:(id *)a1;
- (int)converter:(unsigned int *)a0 bufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 des:(struct AudioStreamPacketDescription **)a2;
- (void)prepareTailReadData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isFileReadyToParsing;
- (BOOL)isCanParse;
- (BOOL)fillFileFormat:(id *)a0;
- (BOOL)fillMiscProperties:(id *)a0;
- (id)guessAudioFileType;
- (void).cxx_destruct;

@end
