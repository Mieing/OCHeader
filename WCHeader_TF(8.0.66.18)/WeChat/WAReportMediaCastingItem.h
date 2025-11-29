@class NSString;

@interface WAReportMediaCastingItem : WAReportBaseItem

@property (nonatomic) unsigned int eventTimeMs;
@property (copy, nonatomic) NSString *videoURI;
@property (nonatomic) unsigned long long eventID;
@property (nonatomic) unsigned long long deviceCount;
@property (nonatomic) unsigned long long castResult;
@property (nonatomic) unsigned long long protocolType;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manuFacturer;
@property (nonatomic) unsigned long long videoState;
@property (nonatomic) unsigned long long component;

- (void)makeSafeString;
- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
