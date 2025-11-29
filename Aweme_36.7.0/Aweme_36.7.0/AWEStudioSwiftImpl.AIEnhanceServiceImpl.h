@interface AWEStudioSwiftImpl.AIEnhanceServiceImpl : HTSService <AWEStudioAIEnhanceServiceProtocol> {
    void /* unknown type, empty encoding */ schedulerMapLock;
    void /* unknown type, empty encoding */ schedulerMap;
    void /* unknown type, empty encoding */ _aipCache;
}

- (id)fetchAIEnhanceSecondaryPage:(id)a0 completion:(id /* block */)a1;
- (id)requestEnhanceAIP:(id)a0 creationID:(id)a1 bizType:(id)a2 stepName:(id)a3 algoReqJSONStr:(id)a4 inputImagesIdentifier:(id)a5 uploadUseBinary:(BOOL)a6 uploadBytesLimit:(long long)a7 downloadUseBinary:(BOOL)a8 progressCallback:(id /* block */)a9 completion:(id /* block */)a10;
- (id)fetchAIPCacheResult:(id)a0 stepName:(id)a1 algoReqJSONStr:(id)a2 inputImagesIdentifier:(id)a3;
- (void)cleanAIPCache;
- (void).cxx_destruct;
- (id)init;

@end
