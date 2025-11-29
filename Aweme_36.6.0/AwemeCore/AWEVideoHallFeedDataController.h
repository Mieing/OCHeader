@class NSString;

@interface AWEVideoHallFeedDataController : AWEBaseDataController <AWEVideoHallFeedDataControllerProtocol>

@property (nonatomic) long long loop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadmoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
