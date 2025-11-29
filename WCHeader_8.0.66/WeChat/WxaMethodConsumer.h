@class NSString;

@interface WxaMethodConsumer : NSObject <WxaMethodConsumerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)consume:(id)a0;

@end
