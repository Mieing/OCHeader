@class NSString, NSDictionary;

@interface AWEShareSearchAIGCTask : AWEShareCommonTask

@property (copy, nonatomic) id /* block */ searchIDsBlock;
@property (copy, nonatomic) id /* block */ postVideoBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void)prepareWithChannel:(id)a0 inView:(id)a1;
- (BOOL)enablePrepareWithChannel:(id)a0 inView:(id)a1;
- (void)fetchShareInfoCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 enterFrom:(id)a1 extraParams:(id)a2 searchIDsBlock:(id /* block */)a3 postVideoBlock:(id /* block */)a4;
- (id)getFetchShareInfoStage;
- (id)getGenerateVideoStage;
- (void).cxx_destruct;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1;

@end
