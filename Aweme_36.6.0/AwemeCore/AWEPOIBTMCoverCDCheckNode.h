@class NSString;

@interface AWEPOIBTMCoverCDCheckNode : NSObject <AWEPOICheckNodeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkNodeWithEvent:(id)a0 params:(id)a1 checkType:(unsigned long long)a2 extra:(id)a3 completion:(id /* block */)a4;
- (BOOL)isValidRouteCD:(id)a0;

@end
