@class FICImageDescription, NSDictionary, FICAssetImageMapData;

@interface FICAssetImageTableItem : NSObject

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long imageDataLength;
@property (nonatomic) void *bytes;
@property (nonatomic) void *imageBytes;
@property (nonatomic) BOOL hasFixBytes;
@property (nonatomic) void *originBytes;
@property (nonatomic) long long fixBytesOffset;
@property (readonly, nonatomic) unsigned long long imageOffset;
@property (readonly, nonatomic) unsigned long long imageSize;
@property (readonly, nonatomic) FICAssetImageMapData *chunk;
@property (retain, nonatomic) FICImageDescription *imageDescription;
@property (retain, nonatomic) NSDictionary *metaInfoDict;
@property (copy, nonatomic) id /* block */ deallocBlock;

- (struct { char x0[1024]; unsigned long long x1; } *)p_metadata;
- (id)initWithTableBytes:(void *)a0 imageDataLength:(unsigned long long)a1 length:(unsigned long long)a2 chunk:(id)a3;
- (void)rebaseItemBytesLocation:(long long)a0;
- (void)metaSaveImageUUID:(id)a0;
- (void)metaSaveImageBytesSize:(unsigned long long)a0;
- (BOOL)flush;
- (void).cxx_destruct;
- (char *)imageUUID;
- (void)dealloc;

@end
