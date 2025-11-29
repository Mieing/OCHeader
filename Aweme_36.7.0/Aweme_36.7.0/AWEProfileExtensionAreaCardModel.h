@class NSString, NSDictionary, AWEProfileExtensionEditInfoModel, AWEProfileExtensionAreaDiamondDataInfoModel, NSNumber, AWEURLModel;

@interface AWEProfileExtensionAreaCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *originSubtitle;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *originCardData;
@property (readonly, nonatomic) NSDictionary *originCardDataDict;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *eventParams;
@property (retain, nonatomic) AWEURLModel *lightIconURLModel;
@property (retain, nonatomic) AWEURLModel *darkIconURLModel;
@property (retain, nonatomic) AWEProfileExtensionEditInfoModel *editPageInfo;
@property (retain, nonatomic) AWEProfileExtensionAreaDiamondDataInfoModel *diamondDataInfoModel;
@property (retain, nonatomic) NSNumber *isCurrentUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lightIconURLModelJSONTransformer;
+ (id)darkIconURLModelJSONTransformer;
+ (id)editPageInfoJSONTransformer;
+ (id)diamondDataInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)imFansGroup_shouldShowPrivilegeEscalationGuideWithUid:(id)a0;
- (void).cxx_destruct;

@end
