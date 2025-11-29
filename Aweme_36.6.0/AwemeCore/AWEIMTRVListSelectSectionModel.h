@class NSArray, NSString;

@interface AWEIMTRVListSelectSectionModel : NSObject

@property (retain, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *sectionIndicatorTitle;

+ (id)sectionModelWithCellModels:(id)a0 sectionTitle:(id)a1 sectionIndicatorTitle:(id)a2;
+ (id)sectionModelWithCellModels:(id)a0 sectionTitle:(id)a1;

- (void).cxx_destruct;

@end
