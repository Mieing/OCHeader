@class NSString;

@interface BDReaderTextPosition : NSObject

@property (copy, nonatomic) NSString *paraId;
@property (nonatomic) unsigned long long offset;

- (id)initWithParaId:(id)a0 offset:(unsigned long long)a1;
- (void).cxx_destruct;

@end
