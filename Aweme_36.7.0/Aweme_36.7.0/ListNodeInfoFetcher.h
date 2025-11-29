@class NSString;

@interface ListNodeInfoFetcher : NSObject <ListNodeInfoFetcherProtocol>

@property (nonatomic) long long shellPtr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
