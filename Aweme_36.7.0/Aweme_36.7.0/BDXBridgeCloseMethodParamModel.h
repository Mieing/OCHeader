@class NSString, NSArray;

@interface BDXBridgeCloseMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) NSArray *containerIDs;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
