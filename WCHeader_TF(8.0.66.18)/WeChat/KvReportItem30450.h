@class NSString;

@interface KvReportItem30450 : KvReportBaseItem

@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *bizName;
@property (copy, nonatomic) NSString *frameSetRootPath;
@property (copy, nonatomic) NSString *frameSetName;
@property (copy, nonatomic) NSString *extInfoStr1;
@property (copy, nonatomic) NSString *extInfoStr2;
@property (copy, nonatomic) NSString *extInfoStr3;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (void).cxx_destruct;

@end
