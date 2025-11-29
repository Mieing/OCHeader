@interface BDRParserProcess : NSObject

@property (copy, nonatomic) id /* block */ appendParaBlock;
@property (copy, nonatomic) id /* block */ insertParaBlock;
@property (copy, nonatomic) id /* block */ layoutBindParaBlock;
@property (copy, nonatomic) id /* block */ handleParaBlock;
@property (copy, nonatomic) id /* block */ cancelComposeBlock;

- (void).cxx_destruct;

@end
