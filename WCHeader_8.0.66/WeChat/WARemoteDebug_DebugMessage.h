@class NSString, NSData;

@interface WARemoteDebug_DebugMessage : WXPBGeneratedMessage

@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int after;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int compressAlgo;
@property (nonatomic) unsigned int originalSize;

+ (id)CompressData:(id)a0;
+ (id)DecompressData:(id)a0 decompressSize:(unsigned int)a1;
+ (void)initialize;

- (void)compressData:(id)a0 supportCompressAlgo:(unsigned int)a1;
- (id)decompressDataWithSupportCompressAlgo:(unsigned int)a0;

@end
