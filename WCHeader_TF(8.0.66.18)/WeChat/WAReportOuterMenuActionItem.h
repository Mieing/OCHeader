@class NSString;

@interface WAReportOuterMenuActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long outScene;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *actionNote;
@property (nonatomic) unsigned int actionTimeStamp;
@property (nonatomic) unsigned long long actionResult;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *shareId;
@property (nonatomic) long long shareActionType;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSString *imageUrl;

- (id)reportString;
- (void).cxx_destruct;

@end
