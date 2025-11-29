@interface AWEFormatPlaymodeManager : HTSService <AWEFormatPlaymodeEntryInterface> {
    void /* unknown type, empty encoding */ playmodeHandler;
}

- (void)openPlaymodeWithType:(unsigned long long)a0 transitionParamsDict:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
