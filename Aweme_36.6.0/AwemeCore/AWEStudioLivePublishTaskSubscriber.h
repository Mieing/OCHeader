@class NSString;

@interface AWEStudioLivePublishTaskSubscriber : HTSLiveApi <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)shared;

@end
