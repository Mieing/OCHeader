@class NSMutableDictionary, NSString, BDPNovelStorageConfig, BDPNovelStorageManager, NSObject;
@protocol OS_dispatch_queue;

@interface BDPPluginNovelStorageImpl : NSObject <BDPNovelDataDelegate>

@property (retain, nonatomic) BDPNovelStorageManager *manager;
@property (retain, nonatomic) BDPNovelStorageConfig *config;
@property (retain, nonatomic) NSMutableDictionary *sensitiveCheckDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncSensitiveQueue;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)hasContentsForBookId:(id)a0 index:(long long)a1;
- (void)setDataWithParam:(id)a0 callback:(id /* block */)a1;
- (void)getDataWithParam:(id)a0 callback:(id /* block */)a1;
- (id)getNextContentMeta:(id)a0 readDirection:(long long)a1;
- (id)getContentMeta:(id)a0 bookId:(id)a1;
- (id)getDetailForContentMeta:(id)a0;
- (void)syncRemoveBlockCharacters:(id)a0;
- (void)checkContentTitleSensitiveWord:(id)a0;
- (id)contentMetaFromDic:(id)a0 bookId:(id)a1;
- (void)asyncMaskSensitiveWordTitle:(id)a0;
- (void)asyncMaskSensitiveWordContent:(id)a0;
- (void)syncMaskSensitiveWord:(id)a0;
- (void)trackSensitiveWordDetect:(id)a0 duration:(double)a1 contentType:(id)a2 andTrackInfo:(id)a3;
- (void)removeStorageWithParam:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)init;

@end
