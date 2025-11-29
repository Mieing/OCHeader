@class NSString;

@interface TextStateHeadClickReportItem : KvReportBaseItem

@property (copy, nonatomic) NSString *toUsername;
@property (copy, nonatomic) NSString *toTextStateId;
@property (copy, nonatomic) NSString *toIconId;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long hasTextStateIcon;
@property (nonatomic) unsigned long long clickResult;
@property (nonatomic) unsigned long long actionTimeStamp;
@property (copy, nonatomic) NSString *extInfo;

- (void)setEnumHasTextStateIcon:(BOOL)a0;
- (void)doReport;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;
- (void).cxx_destruct;

@end
