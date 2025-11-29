@class NSNumber;

@interface BDXBridgeStudioComposerExportSelectControl : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxCount;
@property (retain, nonatomic) NSNumber *minVideoDuration;
@property (retain, nonatomic) NSNumber *maxVideoDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
