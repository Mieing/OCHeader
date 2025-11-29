@interface CGRemotePodEventHandler : CGObject

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)pb_handleStreamingState:(id)a0;
- (void)json_handleStreamingState:(id)a0;

@end
