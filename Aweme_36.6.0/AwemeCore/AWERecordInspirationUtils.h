@class NSString;

@interface AWERecordInspirationUtils : NSObject <AWERecordInspirationUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportAIGCUnreadStatusWithTaskId:(id)a0;
+ (BOOL)shouldUseLightModeUI;
+ (void)getRedPointStatusWithCompletion:(id /* block */)a0;
+ (void)queryUnreadTaskPoolWithCompletion:(id /* block */)a0;
+ (void)removeTaskFromUnreadPool:(id)a0;
+ (id)extractFirstResourceURLFromTask:(id)a0;
+ (void)resetCleanClientUnreadStatus;


@end
