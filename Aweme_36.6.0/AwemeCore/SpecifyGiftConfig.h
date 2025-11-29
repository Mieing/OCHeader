@class GPBInt64Array, NSString, GPBInt64ObjectDictionary;

@interface SpecifyGiftConfig : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *giftMap;
@property (readonly, nonatomic) unsigned long long giftMap_Count;
@property (copy, nonatomic) NSString *setUid;
@property (copy, nonatomic) NSString *des;

+ (id)descriptor;

@end
