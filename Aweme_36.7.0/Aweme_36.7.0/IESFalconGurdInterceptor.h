@class NSString, NSMutableDictionary;

@interface IESFalconGurdInterceptor : NSObject <IESFalconCustomInterceptor>

@property (retain, nonatomic) NSMutableDictionary *accessKeyPatternDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)falconMetaDataForURLRequest:(id)a0;
- (BOOL)shouldInterceptForRequest:(id)a0;
- (void)unregisterPatterns:(id)a0;
- (id)_gurdMetaDataWithURLString:(id)a0;
- (id)_gurdMetaDataWithURLString:(id)a0 ignorePrefix:(id)a1 accessKey:(id)a2 regex:(id)a3;
- (void)registerPattern:(id)a0 forGurdAccessKey:(id)a1;
- (void)registerPatterns:(id)a0 forGurdAccessKey:(id)a1;
- (void).cxx_destruct;

@end
