@interface MessagePackParser : NSObject {
    struct msgpack_unpacker { char *buffer; unsigned long long used; unsigned long long free; unsigned long long off; unsigned long long parsed; struct msgpack_zone *z; unsigned long long initial_buffer_size; void *ctx; } unpacker;
}

+ (id)createUnpackedObject:(struct msgpack_object { int x0; union { BOOL x0; unsigned long long x1; long long x2; double x3; struct { unsigned int x0; struct msgpack_object *x1; } x4; struct { unsigned int x0; struct msgpack_object_kv *x1; } x5; struct { unsigned int x0; char *x1; } x6; struct { unsigned int x0; char *x1; } x7; struct { char x0; unsigned int x1; char *x2; } x8; } x1; })a0;
+ (id)parseData:(id)a0;

- (id)init;
- (id)next;
- (id)initWithBufferSize:(int)a0;
- (void)feed:(id)a0;

@end
