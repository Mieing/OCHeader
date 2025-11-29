@class NSString, LiteAppEmbedViewController;

@interface LiteAppEmbedViewConsumer : NSObject <WxaMethodConsumerDelegate>

@property (weak, nonatomic) LiteAppEmbedViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)consume:(id)a0;
- (void).cxx_destruct;

@end
