@class NSString;
@protocol IESLiveIMDecoder, IESLiveIMDuplicatedFilter;

@interface IESLiveIMPayloadDecoder : NSObject <IESLiveIMDecoder>

@property (retain, nonatomic) id<IESLiveIMDuplicatedFilter> filter;
@property (nonatomic) BOOL logEnabled;
@property (copy, nonatomic) NSString *methodPrefix;
@property (copy, nonatomic) id /* block */ messageClassBlock;
@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)logEvent:(id)a0 params:(id)a1;
- (id)parsePBMessages:(id)a0 toExtra:(id)a1;
- (void)decode:(id)a0 completion:(id /* block */)a1;
- (Class)messageClassWith:(id)a0;
- (long long)checkWrapper:(id)a0 andTransformResult:(id)a1;
- (id)transformValue:(id)a0 withExtra:(id)a1 errorType:(id *)a2;
- (void)registerMethod:(id)a0 withPBClass:(Class)a1;
- (void)unregisterMethod:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
