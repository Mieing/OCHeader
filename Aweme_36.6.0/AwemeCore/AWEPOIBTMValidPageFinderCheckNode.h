@class NSString;

@interface AWEPOIBTMValidPageFinderCheckNode : NSObject <AWEPOICheckNodeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkNodeWithEvent:(id)a0 params:(id)a1 checkType:(unsigned long long)a2 extra:(id)a3 completion:(id /* block */)a4;
- (BOOL)isValidBtmAB:(id)a0 configBtmList:(id)a1 realBtm:(id)a2;
- (BOOL)checkListContainWithConfigBtmList:(id)a0 realBtm:(id)a1;

@end
