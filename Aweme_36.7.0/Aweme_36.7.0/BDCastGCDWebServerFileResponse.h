@class NSString, NSDate;

@interface BDCastGCDWebServerFileResponse : BDCastGCDWebServerResponse {
    NSString *_path;
    unsigned long long _offset;
    unsigned long long _size;
    int _file;
}

@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *eTag;

+ (id)responseWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isAttachment:(BOOL)a2;
+ (id)responseWithFile:(id)a0 isAttachment:(BOOL)a1;
+ (id)responseWithFile:(id)a0;
+ (id)responseWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)initWithFile:(id)a0 isAttachment:(BOOL)a1;
- (id)initWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithFile:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isAttachment:(BOOL)a2 mimeTypeOverrides:(id)a3;
- (void)close;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFile:(id)a0;
- (BOOL)open:(id *)a0;
- (id)readData:(id *)a0;

@end
