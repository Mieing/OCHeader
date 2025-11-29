@class NSString;

@interface AWEProfileFavoriteDataRequestService : HTSService <AWEProfileFavoriteDataRequestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCollectionDataListWithCursor:(id)a0 count:(id)a1 completion:(id /* block */)a2;
- (id)getExpectedSizeInfo;

@end
