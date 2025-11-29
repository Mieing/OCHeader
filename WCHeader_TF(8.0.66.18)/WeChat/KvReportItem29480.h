@interface KvReportItem29480 : KvReportBaseItem

@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int isRed;
@property (nonatomic) unsigned int redDotQuantity;
@property (nonatomic) unsigned int tlSessionId;
@property (nonatomic) unsigned int homeSessionId;

- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;

@end
