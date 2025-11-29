@class NSString, NSMutableDictionary, NSData, TTHttpTask, AWEIMNativeDynamicCardMessage;

@interface AWEIMNativeDynamicStreamComponent : AWEIMComponentBase <AWEIMNativeDynamicStreamInterface>

@property (retain) TTHttpTask *task;
@property long long retryCount;
@property (weak) AWEIMNativeDynamicCardMessage *message;
@property (copy) NSString *lastDataStr;
@property (retain, nonatomic) NSMutableDictionary *messageIDRetryCountDict;
@property BOOL hasRequestSuccess;
@property (retain) NSData *lastData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)requestWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)interruptWithConversationID:(id)a0 responseID:(long long)a1 streamID:(id)a2 type:(long long)a3;
- (void)handleRequestTimeout;
- (id)parseDataToModel:(id)a0;
- (void).cxx_destruct;

@end
