@class NSURL, NSString;

@interface SECRomaValidator : NSObject

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL silent;

- (id)initWithValidateURL:(id)a0 withRefer:(id)a1 silent:(BOOL)a2;
- (id)validateWithResolverFetcher:(id /* block */)a0;
- (id)rulerParamsFor:(id)a0 str:(id)a1;
- (id)executeRules:(id)a0 withParams:(id)a1;
- (BOOL)executeRule:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
