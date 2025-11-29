@interface WCFinderStreamEntranceReportModel : NSObject

@property (nonatomic) BOOL findEntranceHasRedDot;
@property (nonatomic) BOOL recommendTabRedDot;
@property (nonatomic) BOOL followTabRedDot;
@property (nonatomic) BOOL machineTabRedDot;
@property (nonatomic) unsigned long long lastSelectTabIndex;
@property (nonatomic) unsigned long long lastTabType;
@property (nonatomic) BOOL isChangeByScrollTab;

- (void)resetDefault;
- (id)description;

@end
