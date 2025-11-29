@class NSDate, NSString, NSArray, HMDImageOpaqueLoader, HMDCrashProcessState, HMDCrashMetaData, HMDCrashThreadInfo, NSDictionary, HMDCrashRuntimeInfo, HMDCrashHeaderInfo, HMDCrashStorage, NSMutableString;

@interface HMDCrashInfo : HMDCrashModel {
    NSMutableString *_str;
}

@property (copy, nonatomic) NSArray *regions;
@property (retain, nonatomic) HMDImageOpaqueLoader *imageLoader;
@property (retain, nonatomic) NSArray *currentlyUsedImages;
@property (retain, nonatomic) HMDCrashMetaData *meta;
@property (nonatomic, getter=isMissingMeta) BOOL missingMeta;
@property (retain, nonatomic) HMDCrashHeaderInfo *headerInfo;
@property (copy, nonatomic) NSArray *threads;
@property (retain, nonatomic) HMDCrashThreadInfo *stackRecord;
@property (copy, nonatomic) NSArray *queueNames;
@property (copy, nonatomic) NSArray *threadNames;
@property (retain, nonatomic) HMDCrashProcessState *processState;
@property (retain, nonatomic) HMDCrashStorage *storage;
@property (copy, nonatomic) NSDictionary *dynamicInfo;
@property (copy, nonatomic) NSDictionary *dynamicCustom;
@property (copy, nonatomic) NSDictionary *dynamicFilter;
@property (copy, nonatomic) NSDictionary *extraDynamicInfo;
@property (copy, nonatomic) NSArray *vids;
@property (retain, nonatomic) HMDCrashRuntimeInfo *runtimeInfo;
@property (copy, nonatomic) NSArray *registerAnalysis;
@property (copy, nonatomic) NSArray *stackAnalysis;
@property (nonatomic) BOOL isEnvAbnormal;
@property (nonatomic) BOOL isCorrupted;
@property (nonatomic) BOOL fileIOError;
@property (copy, nonatomic) NSString *sdklog;
@property (readonly, nonatomic) NSString *processLog;
@property (readonly, nonatomic) BOOL isComplete;
@property (nonatomic) BOOL isInvalid;
@property (copy, nonatomic) NSString *gameScriptStack;
@property (retain, nonatomic) NSDate *exceptionFileModificationDate;
@property (nonatomic) BOOL hasDump;
@property (nonatomic) BOOL hasGWPAsan;
@property (nonatomic) BOOL hasCFException;
@property (retain, nonatomic) NSString *crashLog;

- (void)tag:(id)a0 format:(id)a1 args:(char *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)error:(id)a0;
- (void)info:(id)a0;
- (void)warn:(id)a0;

@end
