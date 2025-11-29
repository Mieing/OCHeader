@class NSArray, AWEIMNoticeSubCategoryContext;

@interface AWEIMOfficialSubCategoryDetailListDataSource : NSObject

@property (copy, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) AWEIMNoticeSubCategoryContext *context;

- (void)renderWithSubCategories:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
