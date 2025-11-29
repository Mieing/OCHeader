@class NSString, PreloadMsgInfoGenerator, OrderedDictionary, NSObject;
@protocol OS_dispatch_queue, MsgLoaderLogicDelegate;

@interface BaseMsgLoaderLogic : NSObject <BaseMsgViewControllerExt, IMsgExt> {
    int m_queryCount;
    int m_hitPreloadCount;
    int m_hitDownPreloadCount;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m_dataLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preloadQueue;
@property (retain, nonatomic) OrderedDictionary *preloadMsgInfos;
@property (retain, nonatomic) PreloadMsgInfoGenerator *preloadGenerator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downPreloadQueue;
@property (retain, nonatomic) OrderedDictionary *downPreloadMsgInfos;
@property (retain, nonatomic) PreloadMsgInfoGenerator *downPreloadGenerator;
@property (weak, nonatomic) id<MsgLoaderLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getViewModelWithMsgWrap:(id)a0;
- (void)preload;
- (void)downPreload;
- (void)clearCache;
- (id)getNextPreloadInfoWithLocalId:(unsigned int)a0 createTime:(unsigned int)a1 sequence:(unsigned int)a2;
- (void)preloadWithMessageArray:(id)a0;
- (id)generateNewPreloadMsgInfosFromMessageArray:(id)a0;
- (void)generateNewPreloadMsgInfosInMainThreadFromMessageArray:(id)a0;
- (void)insertPreloadMsgInfo:(id)a0 viewModel:(id)a1;
- (void)removePreloadMsgInfosAfterLocalId:(unsigned int)a0 createTime:(unsigned int)a1 sequence:(unsigned int)a2;
- (id)getNextDownPreloadInfoWithLocalId:(unsigned int)a0 createTime:(unsigned int)a1 sequence:(unsigned int)a2;
- (void)downPreloadWithMessageArray:(id)a0;
- (id)generateNewDownPreloadMsgInfosFromMessageArray:(id)a0;
- (void)generateNewDownPreloadMsgInfosInMainThreadFromMessageArray:(id)a0;
- (void)insertDownPreloadMsgInfo:(id)a0 viewModel:(id)a1;
- (void)removeDownPreloadMsgInfosBeforeLocalId:(unsigned int)a0 createTime:(unsigned int)a1 sequence:(unsigned int)a2;
- (void)onEnterBaseMsgSession:(id)a0;
- (void)onExitBaseMsgSession:(id)a0;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void).cxx_destruct;

@end
