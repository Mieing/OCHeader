@class NSString, WCFingertipSearchReportModel;

@interface WCTextSearchEntity : WCSearchEntity

@property (copy, nonatomic) NSString *queryText;
@property (retain, nonatomic) WCFingertipSearchReportModel *reporter;
@property (copy, nonatomic) NSString *exposedFingerWord;
@property (copy, nonatomic) NSString *matchedFingerWord;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;

@end
