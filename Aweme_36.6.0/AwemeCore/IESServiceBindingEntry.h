@interface IESServiceBindingEntry : IESServiceEntry {
    id _weakInstance;
    id _instance;
    BOOL _retained;
}

- (id)initWithInstance:(id)a0 retained:(BOOL)a1;
- (id)extractObject;
- (id)tryExtractObject;
- (void).cxx_destruct;
- (long long)scopeType;

@end
