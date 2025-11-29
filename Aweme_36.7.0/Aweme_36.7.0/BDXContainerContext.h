@class NSString;

@interface BDXContainerContext : BDXSubContext

@property (nonatomic) BOOL disableResetNavigationHide;
@property (copy, nonatomic) NSString *bridgeNameSpace;

- (void)mergeContext:(id)a0 shouldOverride:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
