@class DynamicControl, NSMutableDictionary, NSString, GPBInt64Array, NSMutableArray, HTSLiveImageTemplate;

@interface AssetsEffectResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *assetsArray;
@property (readonly, nonatomic) unsigned long long assetsArray_Count;
@property (retain, nonatomic) GPBInt64Array *deleteAssetsArray;
@property (readonly, nonatomic) unsigned long long deleteAssetsArray_Count;
@property (nonatomic) BOOL enableEffectListV2;
@property (retain, nonatomic) GPBInt64Array *zipSweepMarkAssetsArray;
@property (readonly, nonatomic) unsigned long long zipSweepMarkAssetsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *assetPools;
@property (readonly, nonatomic) unsigned long long assetPools_Count;
@property (retain, nonatomic) HTSLiveImageTemplate *imageTemplate;
@property (nonatomic) BOOL hasImageTemplate;
@property (retain, nonatomic) NSMutableArray *baseAssetsArray;
@property (readonly, nonatomic) unsigned long long baseAssetsArray_Count;
@property (copy, nonatomic) NSString *assetMetaBaseVersion;
@property (retain, nonatomic) DynamicControl *dynamicControl;
@property (nonatomic) BOOL hasDynamicControl;

+ (id)descriptor;

@end
