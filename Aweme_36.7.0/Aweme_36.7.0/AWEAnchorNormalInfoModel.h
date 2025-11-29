@class AWEAnchorUIInfo, AWEAnchorStatusModel, NSString, AWEAnchorPoiUIInfo, AWEURLModel, AWEAnchorTrackModel, NSDictionary, AWEAnchorIconTagInfo;

@interface AWEAnchorNormalInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorCardName;
@property (nonatomic) unsigned long long anchorType;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEAnchorIconTagInfo *iconTag;
@property (retain, nonatomic) AWEURLModel *darkIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) AWEAnchorStatusModel *anchorStatus;
@property (retain, nonatomic) AWEAnchorUIInfo *anchorUIInfo;
@property (retain, nonatomic) AWEAnchorTrackModel *trackModel;
@property (retain, nonatomic) AWEAnchorPoiUIInfo *anchorPoiUIInfo;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) BOOL hasDeliveryProduct;
@property (nonatomic) long long poiNormalStyle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL jumpInner;
@property (copy, nonatomic) NSString *openProductId;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)anchorStatusJSONTransformer;
+ (id)trackModelJSONTransformer;
+ (id)anchorUIInfoJSONTransformer;
+ (id)anchorPoiUIInfoJSONTransformer;
+ (id)iconTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
