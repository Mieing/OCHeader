@class NSString;

@interface WAReportTradeCommentItem : WAReportBaseItem

@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *actionNote;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
