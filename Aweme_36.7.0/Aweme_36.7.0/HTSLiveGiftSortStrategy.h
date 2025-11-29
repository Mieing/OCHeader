@class NSString, GPBInt64Array, NSMutableDictionary;

@interface HTSLiveGiftSortStrategy : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;
@property (retain, nonatomic) GPBInt64Array *tagIdsArray;
@property (readonly, nonatomic) unsigned long long tagIdsArray_Count;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int strategyType;
@property (nonatomic) int updateType;
@property (retain, nonatomic) GPBInt64Array *effectedGiftIdsArray;
@property (readonly, nonatomic) unsigned long long effectedGiftIdsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *eventTrack;
@property (readonly, nonatomic) unsigned long long eventTrack_Count;

+ (id)descriptor;

@end
