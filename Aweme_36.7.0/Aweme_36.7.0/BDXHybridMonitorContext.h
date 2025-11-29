@class NSString;

@interface BDXHybridMonitorContext : BDXSubContext

@property (copy, nonatomic) NSString *virtualAid;
@property (copy, nonatomic) NSString *containerBid;

- (void)mergeContext:(id)a0 shouldOverride:(BOOL)a1;
- (void).cxx_destruct;

@end
