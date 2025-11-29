@class NSString;

@interface WAReportNearByWeappActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned long long openType;
@property (nonatomic) unsigned int appCount;
@property (copy, nonatomic) NSString *nearbyListID;
@property (nonatomic) unsigned int clicktime;

@end
