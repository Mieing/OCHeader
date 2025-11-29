@class NSString, NSDictionary;

@interface AWEDTOPOIModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sourcePoiId;
@property (copy, nonatomic) NSString *sourcePoiName;
@property (copy, nonatomic) NSString *selectPoiId;
@property (copy, nonatomic) NSString *selectPoiName;
@property (copy, nonatomic) NSString *poiRatingId;
@property (copy, nonatomic) NSString *poiRatingDesc;
@property (nonatomic) long long activityId;
@property (copy, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *poiTag;
@property (copy, nonatomic) NSString *poiIndirect;
@property (nonatomic) double poiLatitude;
@property (nonatomic) double poiLongitude;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *poiCpsInfo;
@property (nonatomic) long long poiTabId;
@property (copy, nonatomic) NSString *poiContentExtra;
@property (nonatomic) long long poiRatingGrade;
@property (copy, nonatomic) NSString *poiListInfo;
@property (nonatomic) long long poiVideoType;
@property (copy, nonatomic) NSString *searchRegionType;
@property (copy, nonatomic) NSDictionary *publishParams;
@property (copy, nonatomic) NSDictionary *poiSelectParams;
@property (nonatomic) long long disableSync;
@property (nonatomic) long long isCancelTagAddPoi;
@property (copy, nonatomic) NSString *lifeAnchorParams;
@property (copy, nonatomic) NSString *recordParams;
@property (copy, nonatomic) NSString *lifeAnchorParamPersist;
@property (copy, nonatomic) NSString *poiSugsPublishLogExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
