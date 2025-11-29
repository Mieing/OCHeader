@class NSString;

@interface MegaVideoMainFeedServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoMainFeedService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchData:(BOOL)a0 ignoreCache:(BOOL)a1 cleanUpExisting:(BOOL)a2 callback:(id /* block */)a3;

@end
