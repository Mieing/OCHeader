@class NSString;

@interface WAReportDiscoveryReddotItem : WAReportBaseItem

@property (nonatomic) unsigned int actionType;
@property (nonatomic) BOOL hasRedDot;
@property (copy, nonatomic) NSString *redDotUniqueId;
@property (copy, nonatomic) NSString *redDotTitle;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int redDotTipsId;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
