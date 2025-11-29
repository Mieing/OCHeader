@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty {
    NSString *name;
    id /* block */ readBlock;
    id /* block */ writeBlock;
    double threshold;
}

- (id)initWithName:(id)a0 readBlock:(id /* block */)a1 writeBlock:(id /* block */)a2 threshold:(double)a3;
- (double)threshold;
- (void).cxx_destruct;
- (id)name;
- (id /* block */)writeBlock;
- (id /* block */)readBlock;

@end
