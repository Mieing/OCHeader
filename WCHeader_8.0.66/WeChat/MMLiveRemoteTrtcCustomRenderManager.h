@class MMLiveTaskId, NSMutableDictionary;

@interface MMLiveRemoteTrtcCustomRenderManager : NSObject {
    struct X3DGlobalContext { struct unique_ptr<WeEffect::X3DGlobalContext::Impl, std::default_delete<WeEffect::X3DGlobalContext::Impl>> { struct __compressed_pair<WeEffect::X3DGlobalContext::Impl *, std::default_delete<WeEffect::X3DGlobalContext::Impl>> { struct Impl *__value_; } __ptr_; } mImpl; } sharedGlobalContext;
}

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableDictionary *remoteTrtcCustomRenderWrapperDict;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultData;
- (void)configSharedGlobalContext;
- (void *)getShareGlobalContextPtr;
- (id)getCustomRenderWrapper:(id)a0 scene:(long long)a1;
- (id)getCustomRenderWrapper:(id)a0 scene:(long long)a1 autoCreateIfNotExist:(BOOL)a2;
- (void)addCustomRenderWrapper:(id)a0 userId:(id)a1;
- (void)stopCustomRenderForAllRemoteTrtcUsers;
- (void)destroyCustomRenderWrapper:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
