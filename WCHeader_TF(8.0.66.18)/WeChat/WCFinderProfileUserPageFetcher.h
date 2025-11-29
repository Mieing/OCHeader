@class NSString;

@interface WCFinderProfileUserPageFetcher : NSObject <WCFinderProfileUserPageFetcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userpageWithParams:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;

@end
