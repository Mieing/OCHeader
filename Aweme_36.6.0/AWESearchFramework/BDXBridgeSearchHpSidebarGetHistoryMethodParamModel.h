@class NSString, NSNumber;

@interface BDXBridgeSearchHpSidebarGetHistoryMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *previewType;
@property (retain, nonatomic) NSNumber *enterTs;
@property (retain, nonatomic) NSNumber *maxNum;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
