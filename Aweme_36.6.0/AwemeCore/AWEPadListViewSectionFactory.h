@class NSDictionary, AWEPadListViewSectionFactoryContext;

@interface AWEPadListViewSectionFactory : NSObject

@property (retain, nonatomic) AWEPadListViewSectionFactoryContext *context;
@property (retain, nonatomic) NSDictionary *sectionInteractTypeMap;
@property (retain, nonatomic) NSDictionary *sectionTypeMap;
@property (retain, nonatomic) NSDictionary *horizontalInnerSectionTypeMap;
@property (retain, nonatomic) NSDictionary *headerTypeToHeaderVMMap;
@property (retain, nonatomic) NSDictionary *headerTypeToHeaderModelMap;
@property (retain, nonatomic) NSDictionary *cellControllerMap;
@property (retain, nonatomic) NSDictionary *dataTypeToCardModelMap;
@property (retain, nonatomic) NSDictionary *commonCellControllerMap;

- (id)buildSectionWithModel:(id)a0;
- (id)buildCellControllerWithModelArray:(id)a0 sectionViewModel:(id)a1 cardConfig:(id)a2;
- (id)buildCellControllerWithModelArray:(id)a0 sectionViewModel:(id)a1;
- (id)buildHeaderControllerWithModel:(id)a0;
- (id)buildSectionWithModelArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
