@class GPBInt64Array, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveUser_PublicAreaBadgeInfo : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *badgeInfoMap;
@property (readonly, nonatomic) unsigned long long badgeInfoMap_Count;
@property (retain, nonatomic) GPBInt64Array *badgeListArray;
@property (readonly, nonatomic) unsigned long long badgeListArray_Count;
@property (retain, nonatomic) NSMutableArray *webcastDslBadgeListArray;
@property (readonly, nonatomic) unsigned long long webcastDslBadgeListArray_Count;

+ (id)descriptor;

- (id)badgeListArray;
- (id)badgeInfoMap;

@end
