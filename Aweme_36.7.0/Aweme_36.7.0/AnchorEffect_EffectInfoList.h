@class NSMutableArray;

@interface AnchorEffect_EffectInfoList : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *effectListArray;
@property (readonly, nonatomic) unsigned long long effectListArray_Count;

+ (id)descriptor;

@end
