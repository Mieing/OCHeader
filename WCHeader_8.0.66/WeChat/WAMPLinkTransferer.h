@class NSString, WAThreadSafeMutableDictionary;

@interface WAMPLinkTransferer : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WAThreadSafeMutableDictionary *transferCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMPLinkStringValid:(id)a0;
+ (void)transferNodeFromMPLinkString:(id)a0 completion:(id /* block */)a1;
+ (void)transferNodeFromMPLinkString:(id)a0 businessType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (BOOL)isVCNeedCheckJumpOut:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)saveCachesWithMPShortLinkString:(id)a0 transferredNode:(id)a1;
- (id)getNodeFromCache:(id)a0;
- (void).cxx_destruct;

@end
