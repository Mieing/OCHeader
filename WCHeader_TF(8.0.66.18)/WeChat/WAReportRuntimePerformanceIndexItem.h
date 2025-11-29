@interface WAReportRuntimePerformanceIndexItem : WAReportBaseItem

@property (nonatomic) unsigned int reportScene;
@property (nonatomic) unsigned int reportSceneCurrentCount;
@property (nonatomic) unsigned int indexType;
@property (nonatomic) unsigned long long indexNumBeforeLaunch;
@property (nonatomic) unsigned long long indexNumInCurrentScene;
@property (nonatomic) unsigned long long indexAvgSampleNumInCurrentLifeSpan;
@property (nonatomic) unsigned long long indexMaxSampleNumInCurrentLifeSpan;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) unsigned int runtimeCount;
@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL enableSkyline;
@property (nonatomic) unsigned int skylineCount;
@property (nonatomic) unsigned int webViewCount;
@property (nonatomic) unsigned int engineType;
@property (nonatomic) BOOL bytecodeEnabled;

@end
