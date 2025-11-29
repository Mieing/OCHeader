@class IESECTabKitSSRChunkFrame, NSString, NSMutableData, NSMutableArray;

@interface IESECTabKitSSRChunkParser : NSObject <IESECTabKitChunkParser>

@property (retain, nonatomic) NSMutableData *dataBuffer;
@property (nonatomic) unsigned long long curPosition;
@property (nonatomic) int versionNum;
@property (nonatomic) unsigned char status;
@property (nonatomic) unsigned char frameNum;
@property (retain, nonatomic) NSMutableArray *frames;
@property (retain, nonatomic) IESECTabKitSSRChunkFrame *curFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parserInstance;

- (void)parseData:(id)a0 chunkPackage:(id /* block */)a1;
- (BOOL)checkChunkData;
- (id)innerErr;
- (void)parseStreamHeaderIfNeeded;
- (void)parseStreamFrameWithCallback:(id /* block */)a0;
- (unsigned long long)streamHeaderLength;
- (int)readInt32:(id)a0 idx:(unsigned long long)a1;
- (unsigned char)readInt8:(id)a0 idx:(unsigned long long)a1;
- (unsigned long long)streamFrameHeaderLength;
- (void).cxx_destruct;
- (id)init;
- (id)totalData;

@end
