@class NSArray, NSString;

@interface AWEDCFeedListResponse : NSObject <AWEDCFeedListResponseProtocol>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *dcFeedListModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
