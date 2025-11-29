@class AWEIMTaskDetailistSectionDefaultHeaderModel, NSArray, AWEIMTaskDetailistSectionFooterModel;

@interface AWEIMTaskDetailistSectionModel : NSObject

@property (retain, nonatomic) AWEIMTaskDetailistSectionDefaultHeaderModel *headerModel;
@property (copy, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) AWEIMTaskDetailistSectionFooterModel *footerModel;

- (void).cxx_destruct;

@end
