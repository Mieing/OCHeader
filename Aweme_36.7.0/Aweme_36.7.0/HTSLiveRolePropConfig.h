@class NSString, GPBInt64Array, GPBEnumArray, GPBInt64ObjectDictionary;

@interface HTSLiveRolePropConfig : IESLivePBBaseMessage

@property (retain, nonatomic) GPBEnumArray *playTypeArray;
@property (readonly, nonatomic) unsigned long long playTypeArray_Count;
@property (retain, nonatomic) GPBInt64Array *topicArray;
@property (readonly, nonatomic) unsigned long long topicArray_Count;
@property (retain, nonatomic) GPBEnumArray *effectScenesArray;
@property (readonly, nonatomic) unsigned long long effectScenesArray_Count;
@property (nonatomic) BOOL globalValid;
@property (nonatomic) long long allowListId;
@property (retain, nonatomic) GPBInt64ObjectDictionary *playerProp;
@property (readonly, nonatomic) unsigned long long playerProp_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *teamPlayerProp;
@property (readonly, nonatomic) unsigned long long teamPlayerProp_Count;
@property (copy, nonatomic) NSString *mvpEmojiDecorationId;
@property (copy, nonatomic) NSString *bloodBarStyleWebp;
@property (copy, nonatomic) NSString *mvpEmojiDecorationImg;

+ (id)descriptor;

@end
