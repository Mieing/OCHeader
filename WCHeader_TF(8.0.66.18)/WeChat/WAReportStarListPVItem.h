@class NSString;

@interface WAReportStarListPVItem : WAReportBaseItem

@property (nonatomic) unsigned long long starListEnterScene;
@property (nonatomic) unsigned long long starCount;
@property (copy, nonatomic) NSString *starAppidList;
@property (nonatomic) unsigned int showTimestamp;

- (id)reportString;
- (void).cxx_destruct;

@end
