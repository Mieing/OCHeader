@class NSString;

@interface WAReportNativeProfilePageActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long eventID;
@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned int eventTime;
@property (retain, nonatomic) NSString *shareId;
@property (nonatomic) unsigned int shareActionType;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSString *sharePath;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) unsigned long long shopGuarantee;

- (id)reportString;
- (void).cxx_destruct;

@end
