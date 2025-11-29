@interface IESLiveResourceLoadTraceHandler : NSObject

@property (nonatomic) BOOL booting;

+ (id)handler;

- (void)recordLoadType:(unsigned long long)a0 name:(id)a1;
- (void)executeAction:(id /* block */)a0;

@end
