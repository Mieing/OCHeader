@interface AWEByteNNGenerateStreamingListener : NSObject

@property (copy, nonatomic) id /* block */ streamingHandler;

- (void)handleOutput:(id)a0 isEnded:(BOOL)a1;
- (void).cxx_destruct;

@end
