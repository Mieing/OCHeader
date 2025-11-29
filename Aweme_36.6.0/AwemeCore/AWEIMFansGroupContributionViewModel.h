@class NSURL, AWEIMFansGroupContributionTemplateModel, NSString;

@interface AWEIMFansGroupContributionViewModel : NSObject

@property (retain, nonatomic) AWEIMFansGroupContributionTemplateModel *model;
@property (retain, nonatomic) NSURL *iconImage;
@property (copy, nonatomic) NSString *beyondDesc;
@property (copy, nonatomic) NSString *beyondDataText;
@property (nonatomic) BOOL shouldShowLineView;
@property (nonatomic) BOOL shouldCutToFit;

- (id)attrDesc;
- (struct CGSize { double x0; double x1; })sizeWithString:(id)a0 attributes:(id)a1;
- (id)attributedStringWithTemplate:(id)a0 params:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (double)cellHeight;

@end
