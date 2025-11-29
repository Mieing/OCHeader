@class NSString;

@interface CJPayAnnieJSWorkerMessageCallback : NSObject <MessageCallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessage:(id)a0;

@end
