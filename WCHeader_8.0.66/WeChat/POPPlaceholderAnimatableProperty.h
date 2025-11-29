@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty {
    NSString *name;
    id /* block */ readBlock;
    id /* block */ writeBlock;
    double threshold;
}

- (id)name;
- (id /* block */)readBlock;
- (id /* block */)writeBlock;
- (double)threshold;
- (void).cxx_destruct;

@end
