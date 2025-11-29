@class NSString, AWEIMNoticeSubCategoryModel, AWEIMNoticeSubCategoryContext;

@interface AWEOfficialSubCategoryDetailListCellModel : NSObject

@property (copy, nonatomic) NSString *cellIdentifier;
@property (retain, nonatomic) AWEIMNoticeSubCategoryModel *model;
@property (retain, nonatomic) AWEIMNoticeSubCategoryContext *context;

- (id)initWithCellIdentifier:(id)a0 model:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
