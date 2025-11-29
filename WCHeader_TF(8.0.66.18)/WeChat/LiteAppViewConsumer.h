@class NSString, LiteAppViewController;

@interface LiteAppViewConsumer : NSObject <WxaMethodConsumerDelegate>

@property (weak, nonatomic) LiteAppViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)consume:(id)a0;
- (void).cxx_destruct;

@end
