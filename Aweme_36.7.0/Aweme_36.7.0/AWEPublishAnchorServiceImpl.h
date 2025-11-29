@class NSString;
@protocol ACCPublishAnchorPriorityService, ACCPublishAnchorCacheService, ACCPublishAnchorDataService, ACCPublishAnchorUtilsService;

@interface AWEPublishAnchorServiceImpl : HTSService <ACCPublishAnchorServiceProtocol>

@property (retain, nonatomic) id<ACCPublishAnchorUtilsService> utilsService;
@property (retain, nonatomic) id<ACCPublishAnchorDataService> dataService;
@property (retain, nonatomic) id<ACCPublishAnchorPriorityService> priorityService;
@property (retain, nonatomic) id<ACCPublishAnchorCacheService> cacheService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
