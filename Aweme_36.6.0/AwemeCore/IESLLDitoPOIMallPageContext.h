@class NSString, NSDictionary, IESLLPOIDetailMallFilterModel;

@interface IESLLDitoPOIMallPageContext : LLDitoGeneralContainerPageContext

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *originalTitle;
@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) IESLLPOIDetailMallFilterModel *filterModels;
@property (retain, nonatomic) IESLLPOIDetailMallFilterModel *selectedL2Item;
@property (retain, nonatomic) IESLLPOIDetailMallFilterModel *selectedL3Item;
@property (retain, nonatomic) IESLLPOIDetailMallFilterModel *selectedItem;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
