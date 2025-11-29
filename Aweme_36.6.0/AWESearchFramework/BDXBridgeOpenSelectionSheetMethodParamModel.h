@class NSString, NSNumber, NSArray;

@interface BDXBridgeOpenSelectionSheetMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *currentSelect;
@property (retain, nonatomic) NSNumber *sheetType;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSArray *multiSelect;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
