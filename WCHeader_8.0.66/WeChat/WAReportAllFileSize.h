@class NSArray;

@interface WAReportAllFileSize : WAReportBaseItem {
    NSArray *m_arrDirPrefixes;
}

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) long long dirPrefix;
@property (nonatomic) long long reportFileSizeScene;
@property (nonatomic) unsigned long long totalFileSize;
@property (nonatomic) BOOL isTriggerSingleAppClean;
@property (nonatomic) BOOL isTriggerAllAppClean;
@property (nonatomic) long long runtimeFileOccupation;
@property (nonatomic) BOOL runtimeSpaceStaticsEnable;

- (id)init;
- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
