@class NSString, AWEGeneralSearchModel, AWEHotSpotPublishConfigParams;
@protocol AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol;

@interface AWEHotSpotPublishCreationTask : NSObject <AWESearchPublishCreationTaskProtocol>

@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *hotSpotId;
@property (nonatomic) long long taskType;
@property (retain, nonatomic) AWEGeneralSearchModel *wrappedModel;
@property (nonatomic) long long barType;
@property (nonatomic) BOOL publishOptimize;
@property (weak, nonatomic) id<AWEUGCTopicServiceProtocol, AWESearchVerticalServiceProtocol> ugcService;
@property (nonatomic) BOOL needInsertTry;
@property (nonatomic) BOOL expiredAfterRefresh;
@property (retain, nonatomic) AWEHotSpotPublishConfigParams *configParamsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
