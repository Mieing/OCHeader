@class NSMutableArray;

@interface HTSLiveAssetEffectMixInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *effectMixImageInfosArray;
@property (readonly, nonatomic) unsigned long long effectMixImageInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *effectMixTextInfosArray;
@property (readonly, nonatomic) unsigned long long effectMixTextInfosArray_Count;

+ (id)descriptor;

@end
