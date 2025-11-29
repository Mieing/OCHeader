@class NSString;

@interface WAReportSubscribeMessageItem : WAReportBaseItem

@property (nonatomic) unsigned long long templateType;
@property (copy, nonatomic) NSString *templateItems;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic) BOOL keepOption;
@property (copy, nonatomic) NSString *bizUserName;
@property (copy, nonatomic) NSString *clickIndexString;
@property (copy, nonatomic) NSString *clickCountString;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *kvUid;

- (void)makeSafeString;
- (id)reportString;
- (int)reportID;
- (void).cxx_destruct;

@end
