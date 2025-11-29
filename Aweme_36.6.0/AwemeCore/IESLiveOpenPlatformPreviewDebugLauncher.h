@class NSString;

@interface IESLiveOpenPlatformPreviewDebugLauncher : NSObject <IESLiveOpenPlatformDebugLauncher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)debugLogEventWithLevel:(id)a0 log:(id)a1;
- (void)leaveCurrentDebug;
- (void)startDebugWithDebugSchema:(id)a0 WithCompletion:(id /* block */)a1;
- (unsigned long long)pr_validSchemaEnableDebug:(id)a0;
- (id)pr_calcSumForSchemaString:(id)a0;

@end
