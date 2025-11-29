@interface MMITransmitKvData : NSObject {
    struct Handle<std::shared_ptr<kinda::ITransmitKvData>> { struct shared_ptr<kinda::ITransmitKvData> { struct ITransmitKvData *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

+ (id)create;

- (id)initWithCpp:(const void *)a0;
- (id)allKeys;
- (void)putInt:(id)a0 val:(int)a1;
- (void)putBool:(id)a0 val:(BOOL)a1;
- (void)putLong:(id)a0 val:(long long)a1;
- (void)putString:(id)a0 val:(id)a1;
- (void)putBinary:(id)a0 val:(id)a1;
- (void)putJSEvent:(id)a0 val:(id)a1;
- (void)putKvData:(id)a0 val:(id)a1;
- (void)putPlatformCallback:(id)a0 val:(id)a1;
- (void)putListInt:(id)a0 val:(id)a1;
- (void)putListBool:(id)a0 val:(id)a1;
- (void)putListLong:(id)a0 val:(id)a1;
- (void)putListString:(id)a0 val:(id)a1;
- (void)modifyInt:(id)a0 val:(int)a1;
- (void)modifyBool:(id)a0 val:(BOOL)a1;
- (int)getInt:(id)a0;
- (BOOL)getBool:(id)a0;
- (long long)getLong:(id)a0;
- (id)getString:(id)a0;
- (id)getBinary:(id)a0;
- (id)getJSEvent:(id)a0;
- (id)getKvData:(id)a0;
- (id)getPlatformCallback:(id)a0;
- (id)getIntList:(id)a0;
- (id)getBoolList:(id)a0;
- (id)getLongList:(id)a0;
- (id)getStringList:(id)a0;
- (id)toJson;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
