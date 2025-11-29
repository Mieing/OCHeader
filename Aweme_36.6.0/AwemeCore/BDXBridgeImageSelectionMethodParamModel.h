@class NSNumber;

@interface BDXBridgeImageSelectionMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL isMultiSelect;
@property (retain, nonatomic) NSNumber *maxSelectNum;
@property (nonatomic) BOOL needCut;
@property (retain, nonatomic) NSNumber *cropRatioWidth;
@property (retain, nonatomic) NSNumber *cropRatioHeight;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (retain, nonatomic) NSNumber *minWidth;
@property (retain, nonatomic) NSNumber *minHeight;
@property (retain, nonatomic) NSNumber *source;
@property (nonatomic) long long feature;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
