@interface AWEEditKitImpl.EditMediaGenrePublicAPIImpl : NSObject <AEKEditMediaGenrePublicAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logicComponent;
}

- (unsigned long long)editMediaGenre;
- (unsigned long long)currentProjectMeidaGenre;
- (unsigned long long)mediaGenreForProject:(id)a0;
- (id)changeEditMediaGenreWithResources:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
