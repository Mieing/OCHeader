@class AWEPOIServiceSpuEntryModel, NSString, NSArray, AWEPOIContentItemModel, NSDictionary, AWEURLModel;

@interface AWEFeedPOIMallCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) AWEPOIContentItemModel *mallPoiInfo;
@property (copy, nonatomic) NSArray *poiList;
@property (copy, nonatomic) NSString *distanceDesc;
@property (copy, nonatomic) NSString *hotDesc;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *mallDetailEntry;
@property (retain, nonatomic) AWEURLModel *music;
@property (nonatomic) unsigned long long mallType;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *enhancedShowMoreText;
@property (nonatomic) long long bgColor;
@property (readonly, copy, nonatomic) NSDictionary *frequencyParams;
@property (nonatomic) long long cardShowLimitDaily;
@property (nonatomic) long long cardShowInterval;
@property (nonatomic) long long cardShowLimitExpInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)poiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
