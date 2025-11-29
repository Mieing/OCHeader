@class IESECEZTFQuality, NSMutableDictionary, IESECEZTFJSWorker;

@interface IESECEZTFManager : NSObject {
    NSMutableDictionary *_settingMap;
    NSMutableDictionary *_jsUrlMap;
    IESECEZTFJSWorker *_worker;
    IESECEZTFQuality *_quality;
}

+ (void)testNativeFunction:(id)a0;
+ (id)shareInstance;

- (BOOL)p_getRegisterInfoWithSection;
- (void)loadJSResource;
- (BOOL)jsModuleEnable:(id)a0;
- (void)execEZTFNativeModuleWithModule:(id)a0 data:(id)a1 completion:(id /* block */)a2 invokeQuality:(id)a3;
- (void)execEZTFWithModule:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
