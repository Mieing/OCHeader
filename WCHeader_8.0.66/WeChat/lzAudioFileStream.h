@class NSArray, NSString, KSAudioDataProvider, NSMutableData, NSMutableArray, NSData;

@interface lzAudioFileStream : NSObject <KSAudioFileProtocol>

@property (retain, nonatomic) KSAudioDataProvider *audioDataProvider;
@property (nonatomic) struct OpaqueAudioFileStreamID { } *fileStreamID;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } fileFormat;
@property (nonatomic) long long fileReadOffset;
@property (nonatomic) double fileDurion;
@property (nonatomic) unsigned int averageBytesPerSecond;
@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) BOOL bEof;
@property (nonatomic) long long curPacketOffset;
@property (nonatomic) struct OpaqueAudioConverter { } *audioConverter;
@property (nonatomic) unsigned int outputSizePerPacket;
@property (retain, nonatomic) NSArray *audioFileTypes;
@property (nonatomic) unsigned long long audioDataOffset;
@property (nonatomic) unsigned long long audioDataByteCount;
@property (nonatomic) unsigned long long audioDataPacketCount;
@property (nonatomic) unsigned int audioDataBitRate;
@property (retain, nonatomic) NSMutableArray *audioPackets;
@property (nonatomic) BOOL readyToProducePackets;
@property (nonatomic) BOOL disContinuous;
@property (retain, nonatomic) NSMutableData *inputData;
@property (nonatomic) struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *inputDesc;
@property (nonatomic) BOOL isOpened;
@property (nonatomic) unsigned long long processedPacketsCount;
@property (nonatomic) unsigned long long processedPacketsSizeTotal;
@property (nonatomic) BOOL needCalculateByProcessedPackets;
@property (nonatomic) double packetDuraion;
@property (readonly, nonatomic) unsigned int databytesPerSecond;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL isEof;
@property (readonly, nonatomic) long long lastReadingPos;
@property (retain, nonatomic) NSData *magicCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataProvider:(id)a0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)outputDes;
- (void)close;
- (BOOL)open:(id *)a0;
- (BOOL)isFileReadyToParsing;
- (BOOL)canProducePackets:(id *)a0;
- (BOOL)seekPacketPos:(double)a0;
- (int)readPacket:(void *)a0 bytes:(unsigned int *)a1 packets:(unsigned int *)a2 des:(struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a3;
- (BOOL)readPCMPacket:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 buffer:(void *)a1 bytes:(unsigned int *)a2 packets:(unsigned int *)a3 err:(id *)a4;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID { } *)a0 fileStreamPropertyID:(unsigned int)a1 ioFlags:(unsigned int *)a2;
- (void)dealWithDataFormat;
- (void)dealWithFormatList:(struct OpaqueAudioFileStreamID { } *)a0;
- (void)handleAudioPackets:(const void *)a0 numberBytes:(unsigned int)a1 numberPackets:(unsigned int)a2 packetDescriptions:(struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a3;
- (BOOL)createLPCMAudioConvertor:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 error:(id *)a1;
- (int)converter:(unsigned int *)a0 bufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 des:(struct AudioStreamPacketDescription **)a2;
- (int)checkAudioPacketsToRead;
- (id)guessAudioFileType;
- (void).cxx_destruct;

@end
