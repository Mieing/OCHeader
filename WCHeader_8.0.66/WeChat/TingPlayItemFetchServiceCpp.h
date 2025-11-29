@class NSString;

@interface TingPlayItemFetchServiceCpp : UnitRCObjcBaseProxyClass <TingPlayItemFetchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstance;

- (void)fetchTingPlayItem:(id)a0 forceUpdate:(BOOL)a1 needEncrypt:(BOOL)a2 callback:(id /* block */)a3;

@end
