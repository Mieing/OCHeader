@class NSString;

@interface AWEStudioPersistentLogBiz : NSObject <AWEStudioPersistentLogBizProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)insertSchemaLog:(id)a0 creationID:(id)a1;
+ (void)insertTrackerLog:(id)a0 params:(id)a1 creationID:(id)a2;
+ (void)insertComposerLog:(id)a0 level:(long long)a1 creationID:(id)a2;
+ (void)insertPublishLog:(id)a0 level:(long long)a1 creationID:(id)a2;


@end
