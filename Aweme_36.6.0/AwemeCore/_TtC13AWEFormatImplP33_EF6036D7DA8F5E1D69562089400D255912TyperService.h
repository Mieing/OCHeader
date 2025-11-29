@interface _TtC13AWEFormatImplP33_EF6036D7DA8F5E1D69562089400D255912TyperService : NSObject <AWEFormatTyper> {
    void /* unknown type, empty encoding */ typer;
    void /* unknown type, empty encoding */ currentOutput;
    void /* unknown type, empty encoding */ output;
}

- (void)bindOutputUsingBlock:(id /* block */)a0;
- (void)bindCacheStateUsingBlock:(id /* block */)a0;
- (void)bindTyperFinishedUsingBlock:(id /* block */)a0;
- (void)feedData:(id)a0;
- (void)setupInitData:(id)a0;
- (void)interrupt;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)state;
- (void)appendData:(id)a0;
- (void)finish;

@end
