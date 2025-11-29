@class NSNumber;

@interface BDXBridgeKefuStartGuideProtectConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *uploadActionInternalMs;
@property (retain, nonatomic) NSNumber *uploadActionRepeatCount;
@property (retain, nonatomic) NSNumber *drawGuideInternalMs;
@property (retain, nonatomic) NSNumber *autoCloseDefaultInternal;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
