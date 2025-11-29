@interface POPStaticAnimatableProperty : POPAnimatableProperty {
    struct { id x0; id /* block */ x1; id /* block */ x2; double x3; } *_state;
}

- (id)name;
- (id /* block */)readBlock;
- (id /* block */)writeBlock;
- (double)threshold;

@end
