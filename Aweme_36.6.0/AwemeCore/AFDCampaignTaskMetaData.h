@protocol AFDCampaignTaskProtocol;

@interface AFDCampaignTaskMetaData : NSObject

@property (retain, nonatomic) id<AFDCampaignTaskProtocol> taskInstance;
@property (retain, nonatomic) Class taskClass;

- (id)storageKey;
- (void).cxx_destruct;

@end
