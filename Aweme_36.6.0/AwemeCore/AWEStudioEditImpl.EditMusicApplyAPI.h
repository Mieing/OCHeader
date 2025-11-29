@interface AWEStudioEditImpl.EditMusicApplyAPI : NSObject <AWEStudioEditMusicApplyAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logicComponent;
}

- (void)deselectBGM;
- (void)applyBGMWithMusicId:(id)a0 scene:(unsigned long long)a1 addCompletion:(id /* block */)a2 downloadCompletion:(id /* block */)a3;
- (void)applyBGMWithMusicModel:(id)a0 scene:(unsigned long long)a1 addCompletion:(id /* block */)a2 downloadCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
