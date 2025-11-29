@class IESECListKitItemTrackDataModel, NSString, NSDictionary, IESECShopProductsItemExtraData, NSArray, NSNumber, IESECListKitItemSSRConfigModel;

@interface IESECListKitItemDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopProductsItemExtraData *shop_itemExtra;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) BOOL operationForbiddenConfigCell;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *insertPostion;
@property (retain, nonatomic) NSNumber *insertOriginalPosition;
@property (copy, nonatomic) NSString *insertOrientation;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL renderInNextLoop;
@property (nonatomic) BOOL itemSyncLayoutSize;
@property (retain, nonatomic) NSNumber *autoPlayDuration;
@property (nonatomic) BOOL insertCardAutoPlay;
@property (nonatomic) long long spanSize;
@property (copy, nonatomic) NSDictionary *itemData;
@property (copy, nonatomic) NSDictionary *itemDataEncode;
@property (retain, nonatomic) id bizModel;
@property (copy, nonatomic) NSString *nativeCellEnvIdentifier;
@property (copy, nonatomic) NSString *pendantContainerID;
@property (copy, nonatomic) IESECListKitItemTrackDataModel *trackData;
@property (copy, nonatomic) NSArray *itemOperationPaths;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) IESECListKitItemSSRConfigModel *ssrConfig;
@property (nonatomic) BOOL reportedCreateInterval;
@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *baseActions;
@property (copy, nonatomic) NSString *windVaneParams;
@property (copy, nonatomic) NSString *extraRecommendInfo;
@property (copy, nonatomic) NSNumber *borderRadius;
@property (copy, nonatomic) NSArray *borderRadiusList;
@property (copy, nonatomic) NSNumber *borderRadiusListMaxIndex;
@property (nonatomic) BOOL hasReportShowTrack;
@property (nonatomic) long long exposureNum;
@property (copy, nonatomic) NSDictionary *itemDigest;
@property (copy, nonatomic) NSDictionary *itemLynxExtraData;
@property (copy, nonatomic) NSDictionary *ecBizInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)itemDataJSONTransformer;
+ (id)trackDataJSONTransformer;
+ (id)ssrConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)extraDataJSONTransformer;

- (void).cxx_destruct;

@end
