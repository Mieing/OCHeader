@class DVEEffectValue, NSArray;

@interface ACCBrushEffectDataSource : NSObject

@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (retain, nonatomic) NSArray *brushValues;
@property (nonatomic) BOOL needShowName;
@property (retain, nonatomic) NSArray *assetImages;
@property (retain, nonatomic) NSArray *brushValuesName;
@property (nonatomic) Class cellClass;
@property (nonatomic) long long minEffectCount;

- (BOOL)isDownloadBrushValue:(id)a0;
- (void)downloadBrushValue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
