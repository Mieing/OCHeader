@class NSString, NSArray, AWEPOIItemAnchorContentModel, NSDictionary, AWEPOIAnchorLifeExtraModel, AWEURLModel;

@interface AWEPOITradeAnchorInfo : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEndMinorTagExpand;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *mpAppId;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEPOIItemAnchorContentModel *commentContent;
@property (retain, nonatomic) NSArray *minorTags;
@property (copy, nonatomic) NSDictionary *anchorSuffix;
@property (retain, nonatomic) NSArray *minorExtendActions;
@property (nonatomic) float minorExtendTime;
@property (copy, nonatomic) NSString *feedLogExtra;
@property (retain, nonatomic) AWEPOIAnchorLifeExtraModel *lifeExtra;
@property (nonatomic) long long routeType;
@property (copy, nonatomic) NSString *secondActualShowText;
@property (copy, nonatomic) NSString *btmStandData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorTagsJSONTransformer;
+ (id)commentContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (BOOL)extraIsAdminArea;
- (unsigned long long)extraInfoType;
- (void)setMinorTagIsExpandEnd:(BOOL)a0;
- (BOOL)getMinorTagIsExpandEnd;
- (void).cxx_destruct;
- (id)init;
- (id)componentSeparator;
- (id)iconImageName;

@end
