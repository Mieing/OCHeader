@class NSString;

@interface IESIMRefreshService : HTSService <IESIMRefreshService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)footerWithRefreshingBlock:(id /* block */)a0;
- (id)headerWithRefreshingBlock:(id /* block */)a0;
- (id)richFooterWithRefreshingBlock:(id /* block */)a0;
- (double)footerInsetB;
- (void)setSafelyDispatch:(id)a0;

@end
