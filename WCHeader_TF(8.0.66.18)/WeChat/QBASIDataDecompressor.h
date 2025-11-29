@interface QBASIDataDecompressor : NSObject {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } zStream;
}

@property (readonly) BOOL streamReady;

+ (id)decompressor;
+ (id)uncompressData:(id)a0 error:(id *)a1;
+ (BOOL)uncompressDataFromFile:(id)a0 toFile:(id)a1 error:(id *)a2;
+ (id)inflateErrorWithCode:(int)a0;

- (void)dealloc;
- (id)setupStream;
- (id)closeStream;
- (id)uncompressBytes:(char *)a0 length:(unsigned long long)a1 error:(id *)a2;

@end
