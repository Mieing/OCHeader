@interface TTZstdManager : NSObject

@property (copy, nonatomic) id /* block */ ttZstdCompressBlock;
@property (copy, nonatomic) id /* block */ ttZstdDeCompressBlock;

- (id)initWithZtsdBlock:(id /* block */)a0 ttZstdDeCompressBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
