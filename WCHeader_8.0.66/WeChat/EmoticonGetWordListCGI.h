@interface EmoticonGetWordListCGI : StoreEmotionBaseCgi

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ failed;
@property (nonatomic) unsigned int startTime;

- (id)initWithCompletionBlock:(id /* block */)a0 failed:(id /* block */)a1;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)doReportResult:(BOOL)a0 wordSize:(unsigned long long)a1 version:(unsigned long long)a2;
- (void).cxx_destruct;

@end
