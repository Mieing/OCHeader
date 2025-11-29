@class NSDictionary, NSString, YYMemoryCache;
@protocol AWEIMFileMessageGlobalConfig;

@interface AWEIMFileMessageService : HTSService <AWEIMFileMessageService>

@property (retain, nonatomic) YYMemoryCache *metaInfoCache;
@property (retain, nonatomic) NSDictionary *cacheStrategy;
@property (retain, nonatomic) id<AWEIMFileMessageGlobalConfig> globalConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDegradeFileMsgInConv:(id)a0;
- (id)degradeFileMessageIfNeeded:(id)a0 targetConversationID:(id)a1;
- (void)previewFileMessage:(id)a0 convShortID:(id)a1 file:(id)a2 scene:(long long)a3;
- (void)cacheFileMetaInfo:(id)a0 convShortID:(id)a1 msgID:(id)a2 uri:(id)a3;
- (id)readFileMetaInfoWithConvShortID:(id)a0 msgID:(id)a1 uri:(id)a2;
- (id)p_cacheKeyForCid:(id)a0 msgID:(id)a1 uri:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
