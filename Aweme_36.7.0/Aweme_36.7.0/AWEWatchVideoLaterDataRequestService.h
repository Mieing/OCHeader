@class NSString;

@interface AWEWatchVideoLaterDataRequestService : HTSService <AWEWatchVideoLaterDataRequestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)revisitPlayOrderOptStyle;
- (void)requestCollectionDataListWithCursor:(id)a0 count:(id)a1 completion:(id /* block */)a2;
- (id)requestURL;

@end
