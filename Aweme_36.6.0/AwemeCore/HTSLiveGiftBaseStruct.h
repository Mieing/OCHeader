@class NSString, GPBInt32ObjectDictionary;

@interface HTSLiveGiftBaseStruct : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) int diamondCount;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int bizType;
@property (retain, nonatomic) GPBInt32ObjectDictionary *imageGroupMap;
@property (readonly, nonatomic) unsigned long long imageGroupMap_Count;
@property (nonatomic) long long topicId;

+ (id)descriptor;

@end
