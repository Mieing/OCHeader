@class JsApiSourceInfo, NSString, NSArray, FinderGetTopicListResponse, FinderLocation, WCFinderSectionInfo;
@protocol WCFinderEventViewControllerDelegate;

@interface WCFinderTopicListParams : NSObject

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *topic;
@property (retain, nonatomic) FinderLocation *location;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *refObjectId;
@property (copy, nonatomic) NSString *groupBuyBypassData;
@property (retain, nonatomic) FinderGetTopicListResponse *cacheResponse;
@property (retain, nonatomic) NSArray *cacheDataItems;
@property (retain, nonatomic) WCFinderSectionInfo *sectionInfo;
@property (nonatomic) int tabType;
@property (nonatomic) int fromType;
@property (copy, nonatomic) NSString *refUsername;
@property (nonatomic) unsigned long long eventTopicId;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (weak, nonatomic) id<WCFinderEventViewControllerDelegate> eventDelegate;
@property (nonatomic) unsigned long long musicTopicId;
@property (copy, nonatomic) NSString *patTopicStr;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (nonatomic) unsigned long long eventEnterScene;
@property (nonatomic) unsigned long long eventNewLifeEnterScene;
@property (nonatomic) unsigned int topicNewLifeEnterScene;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long entryType;
@property (copy, nonatomic) NSString *jsapiKVReportInfo;
@property (nonatomic) int poiFromType;
@property (nonatomic) int poiTabID;
@property (nonatomic) int poiFromScene;

- (void)setBindEvent:(id)a0;
- (void).cxx_destruct;

@end
