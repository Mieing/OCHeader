@class NSString;

@interface AWESearchAIGCUtilService : NSObject <AWESearchAIGCUtilServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableAIDouYinNewFramework;
+ (id)aigcComponentDataForViewModel:(id)a0;
+ (id)handleCmdArrayForFixBytesyncDataLynxFirstScreen:(id)a0;
+ (id)handleCmdArrayForReplaceCmdPreOrderOptimize:(id)a0;
+ (id)handleCmdArrayForRemoveReplaceCmdOffScreenOptimize:(id)a0;
+ (id)handleCmdArrayForAppendCmdPreOrderOptimize:(id)a0;
+ (BOOL)nodeShouldDeleteByServer:(id)a0;
+ (BOOL)isOnScreenForNode:(id)a0 inView:(id)a1;
+ (BOOL)sendEventToComponent:(id)a0 event:(id)a1 params:(id)a2;
+ (id)searchIDForMixViewModel:(id)a0;
+ (id)getModelWithNode:(id)a0;
+ (BOOL)enableFixSendAppendStreamDataIssue;
+ (BOOL)enableAIGCComponentDataSettings;
+ (BOOL)fetchIsDisablePublishWithAnswerNodes:(id)a0;
+ (void)setAigcComponentData:(id)a0 forViewModel:(id)a1;


@end
