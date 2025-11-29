@class GPBInt64ObjectDictionary, NSMutableArray, NSMutableDictionary;

@interface GiftExtraResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftExtraArray;
@property (readonly, nonatomic) unsigned long long giftExtraArray_Count;
@property (retain, nonatomic) NSMutableDictionary *sceneConfig;
@property (readonly, nonatomic) unsigned long long sceneConfig_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *pageExtra;
@property (readonly, nonatomic) unsigned long long pageExtra_Count;

+ (id)descriptor;

@end
