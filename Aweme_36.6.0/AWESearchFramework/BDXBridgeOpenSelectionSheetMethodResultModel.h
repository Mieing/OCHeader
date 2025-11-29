@class NSNumber, NSArray;

@interface BDXBridgeOpenSelectionSheetMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *selectIndex;
@property (retain, nonatomic) NSNumber *sheetType;
@property (retain, nonatomic) NSArray *multiSelectIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
