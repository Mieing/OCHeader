@class NSNumber, NSDictionary, NSString;

@interface AWEListenFeedDataController : AWEBaseDataController <AWEListenFeedDataControllerProtocol>

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *listenMode;
@property (nonatomic) BOOL isPlayListRequest;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSNumber *currentCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
