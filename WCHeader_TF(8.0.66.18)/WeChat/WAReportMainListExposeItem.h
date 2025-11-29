@class NSString;

@interface WAReportMainListExposeItem : WAReportBaseItem

@property (nonatomic) unsigned int enterListTimeStamp;
@property (nonatomic) unsigned int leaveListTimeStamp;
@property (nonatomic) unsigned int leaveListType;
@property (nonatomic) unsigned int clickAppidIndex;
@property (copy, nonatomic) NSString *clickAppid;
@property (copy, nonatomic) NSString *clickAppidName;
@property (nonatomic) unsigned int clickAppidIsStar;
@property (copy, nonatomic) NSString *appidFrom1And5;
@property (copy, nonatomic) NSString *appidFrom6And10;
@property (copy, nonatomic) NSString *appidFrom11And15;
@property (copy, nonatomic) NSString *appidFrom16And20;
@property (copy, nonatomic) NSString *openSession;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
