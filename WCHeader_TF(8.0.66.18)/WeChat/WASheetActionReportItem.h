@class NSString;

@interface WASheetActionReportItem : WAReportBaseItem

@property (nonatomic) long long action;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL expandButtonEnable;
@property (nonatomic) long long actionScene;
@property (nonatomic) NSString *fromAppId;
@property (nonatomic) NSString *fromSessionId;
@property (nonatomic) NSString *targetAppId;
@property (nonatomic) NSString *targetSessionId;

- (int)reportID;
- (id)reportString;

@end
