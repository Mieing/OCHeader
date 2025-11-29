@class NSArray;

@interface PLzmaSDKOutMultiStream : PLzmaSDKOutStream

@property (readonly, nonatomic) NSArray *streams;

- (BOOL)isMulti;
- (id)initWithDirectoryPath:(id)a0 partName:(id)a1 partExtension:(id)a2 format:(unsigned char)a3 andPartSize:(unsigned int)a4;
- (id)initWithPartSize:(unsigned int)a0;

@end
