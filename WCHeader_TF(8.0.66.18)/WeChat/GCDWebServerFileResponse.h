@class NSString;

@interface GCDWebServerFileResponse : GCDWebServerResponse {
    NSString *_path;
    unsigned long long _offset;
    unsigned long long _size;
    int _file;
}

+ (id)responseWithFile:(id)a0;
+ (id)responseWithFile:(id)a0 isAttachment:(BOOL)a1;
+ (id)responseWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)responseWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isAttachment:(BOOL)a2;

- (id)initWithFile:(id)a0;
- (id)initWithFile:(id)a0 isAttachment:(BOOL)a1;
- (id)initWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isAttachment:(BOOL)a2;
- (BOOL)open:(id *)a0;
- (id)readData:(id *)a0;
- (void)close;
- (id)description;
- (void).cxx_destruct;

@end
