@class NSString, NSMutableDictionary;

@interface IESFalconFileInterceptor : NSObject <IESFalconCustomInterceptor>

@property (retain, nonatomic) NSMutableDictionary *fileSearchPathPatternDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)falconMetaDataForURLRequest:(id)a0;
- (id)_customPathsWithURLString:(id)a0;
- (id)_customPathsWithURLString:(id)a0 ignorePrefix:(id)a1 searchPath:(id)a2;
- (void)registerPattern:(id)a0 forSearchPath:(id)a1;
- (void)registerPatterns:(id)a0 forSearchPath:(id)a1;
- (void)unregisterPatterns:(id)a0;
- (void).cxx_destruct;

@end
