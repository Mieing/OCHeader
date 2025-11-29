@class NSMutableDictionary, IESEffectModel;

@interface SAMIBatchVCResult : NSObject

@property (retain, nonatomic) NSMutableDictionary *resultDic;
@property (retain, nonatomic) IESEffectModel *effect;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) BOOL enablePreview;

+ (id)resultOfTaskResult:(id)a0 effect:(id)a1;
+ (id)resultOfSVCInfoGroup:(id)a0 effect:(id)a1;
+ (id)cachedResultOfAssets:(id)a0 effect:(id)a1 rangeInfo:(id)a2;

- (void)updateWithResult:(id)a0 effect:(id)a1;
- (void)updateWithSVCInfoGroup:(id)a0 effect:(id)a1;
- (id)vcAssetForAsset:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void).cxx_destruct;

@end
