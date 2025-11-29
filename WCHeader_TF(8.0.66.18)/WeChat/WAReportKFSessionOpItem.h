@class NSString;

@interface WAReportKFSessionOpItem : WAReportBaseItem

@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned int actionTime;

- (id)reportString;
- (void).cxx_destruct;

@end
