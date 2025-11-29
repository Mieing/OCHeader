@class GPBInt64Array, HTSLiveCommon, HTSLiveGiftSortStrategy;

@interface HTSLiveGiftUpdateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int updateType;
@property (retain, nonatomic) GPBInt64Array *updateGiftIdsArray;
@property (readonly, nonatomic) unsigned long long updateGiftIdsArray_Count;
@property (retain, nonatomic) GPBInt64Array *updateAssetIdsArray;
@property (readonly, nonatomic) unsigned long long updateAssetIdsArray_Count;
@property (retain, nonatomic) HTSLiveGiftSortStrategy *giftSortStrategy;
@property (nonatomic) BOOL hasGiftSortStrategy;

+ (id)descriptor;

@end
