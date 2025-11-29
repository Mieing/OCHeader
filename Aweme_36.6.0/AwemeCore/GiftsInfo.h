@class ExtraParams, NSString, HTSLiveImage, GiftAgentConfig, SpeedyGiftPopupInfo, NSMutableDictionary, GiftSearchConfig, NSMutableArray, GPBInt64Array;

@interface GiftsInfo : IESLivePBBaseMessage

@property (nonatomic) long long newGiftId;
@property (retain, nonatomic) GPBInt64Array *fansclubGiftIdsArray;
@property (readonly, nonatomic) unsigned long long fansclubGiftIdsArray_Count;
@property (nonatomic) long long speedyGiftId;
@property (copy, nonatomic) NSString *giftWords;
@property (retain, nonatomic) NSMutableArray *giftGroupInfosArray;
@property (readonly, nonatomic) unsigned long long giftGroupInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *freeCellItemsArray;
@property (readonly, nonatomic) unsigned long long freeCellItemsArray_Count;
@property (retain, nonatomic) GPBInt64Array *honorGiftIdsArray;
@property (readonly, nonatomic) unsigned long long honorGiftIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *gameGiftItemsArray;
@property (readonly, nonatomic) unsigned long long gameGiftItemsArray_Count;
@property (retain, nonatomic) GPBInt64Array *nobleGiftIdsArray;
@property (readonly, nonatomic) unsigned long long nobleGiftIdsArray_Count;
@property (nonatomic) BOOL hideRechargeEntry;
@property (retain, nonatomic) HTSLiveImage *giftEntranceIcon;
@property (nonatomic) BOOL hasGiftEntranceIcon;
@property (retain, nonatomic) GPBInt64Array *vipGiftIdsArray;
@property (readonly, nonatomic) unsigned long long vipGiftIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *giftComboInfosArray;
@property (readonly, nonatomic) unsigned long long giftComboInfosArray_Count;
@property (retain, nonatomic) SpeedyGiftPopupInfo *speedyGiftPopupInfo;
@property (nonatomic) BOOL hasSpeedyGiftPopupInfo;
@property (nonatomic) long long firstRechargeSpeedyGiftId;
@property (retain, nonatomic) NSMutableDictionary *msgProcessFilter;
@property (readonly, nonatomic) unsigned long long msgProcessFilter_Count;
@property (retain, nonatomic) ExtraParams *extraParams;
@property (nonatomic) BOOL hasExtraParams;
@property (retain, nonatomic) GiftSearchConfig *giftSearchConfig;
@property (nonatomic) BOOL hasGiftSearchConfig;
@property (retain, nonatomic) GiftAgentConfig *giftAgentConfig;
@property (nonatomic) BOOL hasGiftAgentConfig;

+ (id)descriptor;

@end
