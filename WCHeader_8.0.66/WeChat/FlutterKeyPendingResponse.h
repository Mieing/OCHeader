@class FlutterEmbedderKeyResponder;

@interface FlutterKeyPendingResponse : NSObject

@property (readonly, weak) FlutterEmbedderKeyResponder *responder;
@property (nonatomic) unsigned long long responseId;

- (id)initWithHandler:(id)a0 responseId:(unsigned long long)a1;
- (void).cxx_destruct;

@end
