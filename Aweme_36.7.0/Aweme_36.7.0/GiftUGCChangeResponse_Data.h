@class GPBInt64Array, NSMutableArray;

@interface GiftUGCChangeResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;
@property (retain, nonatomic) GPBInt64Array *topGiftIdsArray;
@property (readonly, nonatomic) unsigned long long topGiftIdsArray_Count;
@property (retain, nonatomic) GPBInt64Array *dislikeGiftIdsArray;
@property (readonly, nonatomic) unsigned long long dislikeGiftIdsArray_Count;

+ (id)descriptor;

@end
