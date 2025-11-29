@class NSHashTable;

@interface IESEffectDownloadFlowConflictMonitor : NSObject

@property (retain, nonatomic) NSHashTable *monitorTable;

- (void)notifyDownloadFlowTrackWithTask:(id)a0;
- (void)trackCurrentDownloadingFlowWithBusinessParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
