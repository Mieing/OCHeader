@interface XBusReplyCallback : NSObject {
    struct ReplyCallBack { struct ScopedRefptr<xbus::Request> { struct Request *_ptr; } _request; } _callback;
}

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)post:(id)a0;
- (void)dealloc;
- (id)initWithPtr:(void *)a0;

@end
