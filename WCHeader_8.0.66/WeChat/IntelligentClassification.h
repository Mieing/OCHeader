@class NSRecursiveLock;

@interface IntelligentClassification : NSObject {
    BOOL m_intelligentClassificationInitSuccess;
    NSRecursiveLock *m_lock;
    struct XChatCls { struct unique_ptr<wevision::XChatCls::Impl, std::default_delete<wevision::XChatCls::Impl>> { struct __compressed_pair<wevision::XChatCls::Impl *, std::default_delete<wevision::XChatCls::Impl>> { struct Impl *__value_; } __ptr_; } mspImpl; } m_imglabel;
    BOOL m_intelligentClassificationGPUInitSuccess;
    struct XChatCls { struct unique_ptr<wevision::XChatCls::Impl, std::default_delete<wevision::XChatCls::Impl>> { struct __compressed_pair<wevision::XChatCls::Impl *, std::default_delete<wevision::XChatCls::Impl>> { struct Impl *__value_; } __ptr_; } mspImpl; } m_imglabelGPU;
    BOOL m_intelligentClassificationNPUInitSuccess;
    struct XChatCls { struct unique_ptr<wevision::XChatCls::Impl, std::default_delete<wevision::XChatCls::Impl>> { struct __compressed_pair<wevision::XChatCls::Impl *, std::default_delete<wevision::XChatCls::Impl>> { struct Impl *__value_; } __ptr_; } mspImpl; } m_imglabelNPU;
}

- (id)init;
- (void)InitModel;
- (BOOL)isCanSupportGPU;
- (BOOL)isGPUIntelligentPattern;
- (BOOL)isCanSupportNPU;
- (BOOL)isCanSupportAMX;
- (BOOL)checkModelFilesExist;
- (BOOL)checkClassificationInitSuccess;
- (id)getClassificationWithImage:(id)a0 mediaItem:(id)a1;
- (id)getNPUClassificationWithImage:(id)a0 mediaItem:(id)a1;
- (id)batchExecuteClassificationNPU:(id)a0 error:(id)a1;
- (id)batchExecuteClassificationGPU:(id)a0 error:(id)a1;
- (void)decreaseCrashCount:(id)a0;
- (id)batchExecuteClassificationCPU:(id)a0 error:(id)a1;
- (id)batchExecuteClassification:(id)a0 error:(id)a1;
- (id)getLabelNameWithLabelId:(unsigned int)a0;
- (id)searchLabelInfoDic:(id)a0;
- (id)getLabelIdListWithQuery:(id)a0;
- (id)getLabelIdListAlwaySimplifyChinaWithQuery:(id)a0;
- (id)searchLabelInfoDic:(id)a0 useFuzzyQuery:(BOOL)a1 isAlwaySimplifyChina:(BOOL)a2;
- (id)searchSynonymLabelInfoDic:(id)a0;
- (id)getSynonymLabelIdListWithQuery:(id)a0;
- (id)getSynonymLabelIdListAlwaySimplifyChinaWithQuery:(id)a0;
- (id)searchSynonymLabelInfoDic:(id)a0 useFuzzyQuery:(BOOL)a1 isAlwaySimplifyChina:(BOOL)a2;
- (void)releaseInternalMemory;
- (void)doReportIntelligentClsPerfEveryDay:(id)a0 inferenceCost:(float)a1;
- (id)getIntelligentClsPerfEveryDayId;
- (id)getClassificationWithImage:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
