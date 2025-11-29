@class NSMutableDictionary;

@interface AWESearchAIGCSubQuestionDataController : AWESearchAIGCSubDataController

@property (retain, nonatomic) NSMutableDictionary *questionDataParams;

- (void)appendData:(id)a0 ofType:(unsigned long long)a1;
- (id)subRequestParams;
- (void)appendQuestionData:(id)a0;
- (void).cxx_destruct;
- (void)resetData;

@end
