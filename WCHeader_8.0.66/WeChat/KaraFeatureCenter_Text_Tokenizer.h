@interface KaraFeatureCenter_Text_Tokenizer : NSObject {
    struct shared_ptr<Kara::FeatureCenter::Text::FullTokenizer> { struct FullTokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } _tokenizer;
}

- (id)initWithVacabulary:(id)a0;
- (id)tokenize:(id)a0 maxLength:(long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
