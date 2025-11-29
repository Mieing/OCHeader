@class NSNumber, NSString;

@interface AWEListenJXDataController : AWEBaseDataController <AWEListenFeedDataControllerProtocol>

@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) int fetchCount;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *listenMode;
@property (nonatomic) BOOL isPlayListRequest;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSNumber *currentCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadmoreWithCompletion:(id /* block */)a0;
- (long long)getCurrentAudioRouteType;
- (id)getOutputDeviceName;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0;

@end
