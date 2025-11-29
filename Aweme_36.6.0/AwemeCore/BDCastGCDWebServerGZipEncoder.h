@interface BDCastGCDWebServerGZipEncoder : BDCastGCDWebServerBodyEncoder {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _stream;
    BOOL _finished;
}

- (id)initWithResponse:(id)a0 reader:(id)a1;
- (void)close;
- (BOOL)open:(id *)a0;
- (id)readData:(id *)a0;

@end
