@class NSString;

@interface WCFinderTopicStoreInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_topic;
+ (void)initialize;
+ (id)fromTopicInfo:(id)a0;
+ (id)fromTopicInfoList:(id)a0;

- (id)getPBPropertyTable;
- (id)converTopicInfo;
- (void).cxx_destruct;

@end
