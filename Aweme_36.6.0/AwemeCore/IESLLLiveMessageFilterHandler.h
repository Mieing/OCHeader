@class NSString;

@interface IESLLLiveMessageFilterHandler : NSObject <IESLLLiveMessageHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handlePostMessage:(id)a0 withSubscriber:(id)a1;

@end
