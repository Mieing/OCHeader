@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXDataMigration : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) BOOL hasFinishMigration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackNoUserID:(id)a0;
- (BOOL)isOldDBExist;
- (BOOL)isSplitDBExist;
- (double)splitDBMainFileSize;
- (double)oldDBMainFileSize;
- (double)allDBFileSizeWithDBPath:(id)a0;
- (id)allDBFilesWithDBPath:(id)a0;
- (BOOL)isSplitStatus;
- (double)oldDBFileSize;
- (id)userID;
- (void).cxx_destruct;
- (double)fileSize:(id)a0;
- (void)migrateIfNeeded;
- (BOOL)canMigrate;
- (id)initWithRootObject:(id)a0;

@end
