@class NSArray, NSMutableDictionary, NSString, NSMutableArray, IESMLModel;

@interface MLSDKInferenceEngine : NSObject <IInferenceEngine> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableArray *paramsPre;
@property (retain, nonatomic) NSArray *paramsPrefixNew;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long harTaskType;
@property (retain, nonatomic) IESMLModel *mlModel;
@property (nonatomic) BOOL fetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)predictWithParam:(id)a0 engineCallback:(id /* block */)a1;
- (id)initWithUrl:(id)a0 harTaskType:(unsigned long long)a1;
- (void)deprecated_predictWithParam:(id)a0 engineCallback:(id /* block */)a1;
- (id)getPlayTimeMLModel;
- (id)changeInputParamFormat:(id)a0;
- (id)deprecated_getPlayTimeMLModel;
- (id)deprecated_changeInputParamFormat:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)dealloc;
- (id)initWithUrl:(id)a0;

@end
