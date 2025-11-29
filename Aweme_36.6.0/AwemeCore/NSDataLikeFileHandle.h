@class NSFileHandle;

@interface NSDataLikeFileHandle : NSObject {
    NSFileHandle *_file;
}

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
