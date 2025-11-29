@class NSString, NSArray, NSDictionary, IESEffectModel, NSNumber;

@interface IESLiveRoomBeautyItem : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSArray *childrenEffects;
@property (retain, nonatomic) NSString *effectIdentifier;
@property (retain, nonatomic) NSString *parentEffectIdentifier;
@property (retain, nonatomic) NSString *parentResourceId;
@property (retain, nonatomic) IESLiveRoomBeautyItem *extraItem;
@property (retain, nonatomic) NSString *itemName;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *oldUniqueIdentifier;
@property (retain, nonatomic) NSString *tagsUpdatedTimeStamp;
@property (nonatomic) BOOL isUsing;
@property (retain, nonatomic) NSString *resourceID;
@property (retain, nonatomic) NSString *videoTag;
@property (nonatomic) double currentRatio;
@property (nonatomic) BOOL isInDefaultStatus;
@property (copy, nonatomic) NSString *replaceEffectId;
@property (copy, nonatomic) NSString *replacedResourcePath;
@property (nonatomic) BOOL isFilter;
@property (retain, nonatomic) IESEffectModel *originModel;
@property (retain, nonatomic) NSArray *templateBeautyItems;
@property (nonatomic) BOOL isEffecting;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *imageURLStr;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isDefaultSubItem;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSString *sliderName;
@property (nonatomic) long long minValue;
@property (nonatomic) long long maxValue;
@property (nonatomic) long long displayValue;
@property (nonatomic) BOOL doubleDirection;
@property (nonatomic) long long effectiveValue;
@property (retain, nonatomic) NSString *tag;
@property (nonatomic) double normalizedEffectiveValue;
@property (nonatomic) long long cachedEffectiveValue;
@property (copy, nonatomic) NSDictionary *configParams;
@property (retain, nonatomic) NSArray *extraItems;
@property (nonatomic) BOOL isLocalNoneItem;
@property (retain, nonatomic) NSArray *childrenItems;
@property (retain, nonatomic) IESLiveRoomBeautyItem *defaultChildItem;
@property (nonatomic) BOOL isExpending;
@property (nonatomic) BOOL isChildrenEffect;
@property (weak, nonatomic) IESLiveRoomBeautyItem *parentItem;
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isEffectiveChildItem;
@property (retain, nonatomic) NSNumber *makeupType;
@property (retain, nonatomic) NSArray *templateSubItems;
@property (nonatomic) double normalizedVideoAdjustValue;
@property (nonatomic) unsigned long long processType;
@property (nonatomic) long long veType;
@property (nonatomic) unsigned long long adjustType;
@property (nonatomic) BOOL needAutoRender;
@property (retain, nonatomic) NSArray *levelArray;
@property (nonatomic) unsigned long long defaultSelectIndex;
@property (nonatomic) unsigned long long zeroIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)levelArrayJSONTransformer;
+ (id)adjustTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSameItemWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
