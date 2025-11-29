@class NSMutableArray, GPBInt64ObjectDictionary;

@interface AnchorEffect : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *effectListArray;
@property (readonly, nonatomic) unsigned long long effectListArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *effectMap;
@property (readonly, nonatomic) unsigned long long effectMap_Count;

+ (id)descriptor;

@end
