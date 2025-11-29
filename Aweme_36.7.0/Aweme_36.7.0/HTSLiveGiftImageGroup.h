@class GPBInt32ObjectDictionary;

@interface HTSLiveGiftImageGroup : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) GPBInt32ObjectDictionary *imageGroup;
@property (readonly, nonatomic) unsigned long long imageGroup_Count;

+ (id)descriptor;

@end
