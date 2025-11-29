@class NSString;

@interface WAReportTemplateMsgActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long eventID;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) unsigned int operateTime;
@property (nonatomic) unsigned int templateMsgType;
@property (nonatomic) unsigned int appBrandType;

- (id)reportString;
- (void).cxx_destruct;

@end
