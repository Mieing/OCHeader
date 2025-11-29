@class NSObject, NSMutableDictionary, APCDTOComposerApi;
@protocol OS_dispatch_queue, ACCConfigContainerDataSource;

@interface ACCConfigContainer : NSObject <NSCopying> {
    BOOL m_init;
    APCDTOComposerApi *m_composerConfig;
    NSMutableDictionary *m_nativeConfigs;
    NSObject<OS_dispatch_queue> *m_queue;
}

@property (weak, nonatomic) id<ACCConfigContainerDataSource> dataSource;

- (id)nativeConfigForClass:(Class)a0;
- (id)nativeConfigs;
- (id)p_draftFolder;
- (void)addNativeConfig:(id)a0;
- (id)composerConfig;
- (void)addComposerConfig:(id)a0;
- (void)synchronizeIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
