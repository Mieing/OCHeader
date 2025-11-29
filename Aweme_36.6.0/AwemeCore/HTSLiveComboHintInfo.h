@class NSMutableArray;

@interface HTSLiveComboHintInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *comboHintArray;
@property (readonly, nonatomic) unsigned long long comboHintArray_Count;
@property (nonatomic) int buttonStyle;

+ (id)descriptor;

@end
