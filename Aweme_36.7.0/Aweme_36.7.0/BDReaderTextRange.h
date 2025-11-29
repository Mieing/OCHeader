@class BDReaderTextPosition;

@interface BDReaderTextRange : NSObject

@property (retain, nonatomic) BDReaderTextPosition *startPosition;
@property (retain, nonatomic) BDReaderTextPosition *endPosition;

- (id)initWithStartParaId:(id)a0 startOffset:(unsigned long long)a1 endParaId:(id)a2 endOffset:(unsigned long long)a3;
- (void).cxx_destruct;

@end
