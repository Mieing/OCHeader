@class NSArray, NSString;

@interface AWEUserPostsDataResponse : NSObject <AWEDCFeedListResponseProtocol>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *dcFeedListModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHasMore:(BOOL)a0 models:(id)a1;
- (void).cxx_destruct;

@end
