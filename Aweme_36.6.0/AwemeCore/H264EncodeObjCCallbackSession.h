@interface H264EncodeObjCCallbackSession : NSObject {
    void *_encoder;
}

- (id)init;
- (void)dealloc;
- (void)setEncoder:(void *)a0;
- (void)notification:(id)a0;

@end
