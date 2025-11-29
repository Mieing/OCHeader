@interface JITEventHandlerBaseAsync : JITEventHandlerBase

@property (nonatomic) unsigned long long handlerId;
@property (copy, nonatomic) id /* block */ invokeCallback;

- (void)invoke:(id)a0;
- (void)callback:(id)a0;
- (void).cxx_destruct;

@end
