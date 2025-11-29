@class NSNumber, NSString;

@interface BDXBridgeSetTimingCloseTotalTimeMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *timingCloseTotalTime;
@property (retain, nonatomic) NSNumber *timingCloseType;
@property (copy, nonatomic) NSString *pre_page;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
