@interface FICAssetImageMapData : NSObject

@property (nonatomic) long long realOffset;
@property (nonatomic) unsigned long long realLength;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) long long realDataBytesOffet;
@property (nonatomic) unsigned long long realDataLength;
@property (readonly, nonatomic) void *dataBytes;

- (id)initWithMappedData:(void *)a0 offset:(long long)a1 length:(unsigned long long)a2;
- (id)initWithFD:(int)a0 offset:(long long)a1 length:(unsigned long long)a2;
- (void)dealloc;

@end
