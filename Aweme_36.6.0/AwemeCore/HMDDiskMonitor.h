@class HMDFolderInfo, HMDDiskMonitorConfig, NSHashTable;

@interface HMDDiskMonitor : HMDMonitor

@property (retain, nonatomic) NSHashTable *visitors;
@property (retain, nonatomic) HMDFolderInfo *folderVisitor;
@property (retain, nonatomic) HMDDiskMonitorConfig *diskConfig;
@property double nextAvailableTimeInterval;

+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (void)startWithInterval:(double)a0;
- (unsigned long long)reporterPriority;
- (void)addFolderInfoVisitor;
- (void)updateModifiedFileChangeTimeMonitor;
- (void)removeFolderInfoVisitor;
- (void)disableModifiedFileChangeTimeMonitor;
- (void)addFileVisitor:(id)a0;
- (void)removeFileVisitor:(id)a0;
- (id)complianceConvert:(id)a0;
- (void)recordForSpecificScene:(id)a0;
- (void)didEnterScene:(id)a0;
- (void)willLeaveScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)didEnterBackground:(id)a0;
- (Class)storeClass;

@end
