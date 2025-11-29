@class HTSLiveImageTemplate, GiftsInfo, GiftBaseData, NSMutableDictionary, NSNumber, NSMutableArray;

@interface GiftListResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSNumber *roomID;
@property (nonatomic) long long fetchMomentType;
@property (retain, nonatomic) GiftsInfo *giftsInfo;
@property (nonatomic) BOOL hasGiftsInfo;
@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;
@property (retain, nonatomic) NSMutableArray *pagesArray;
@property (readonly, nonatomic) unsigned long long pagesArray_Count;
@property (retain, nonatomic) NSMutableArray *doodleTemplatesArray;
@property (readonly, nonatomic) unsigned long long doodleTemplatesArray_Count;
@property (nonatomic) long long defaultTabId;
@property (retain, nonatomic) GiftBaseData *giftBaseData;
@property (nonatomic) BOOL hasGiftBaseData;
@property (retain, nonatomic) NSMutableArray *giftSortStrategyArray;
@property (readonly, nonatomic) unsigned long long giftSortStrategyArray_Count;
@property (retain, nonatomic) HTSLiveImageTemplate *imageTemplate;
@property (nonatomic) BOOL hasImageTemplate;
@property (retain, nonatomic) NSMutableDictionary *eventTrack;
@property (readonly, nonatomic) unsigned long long eventTrack_Count;

+ (id)descriptor;

@end
