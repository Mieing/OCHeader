@class NSMutableArray;

@interface IESECLLContainerBuilder : IESECLLLayoutableBuilder {
    NSMutableArray *_subbuilders;
}

@property (readonly, copy, nonatomic) id /* block */ item;
@property (readonly, copy, nonatomic) id /* block */ spacer;
@property (readonly, copy, nonatomic) id /* block */ verticalGroup;
@property (readonly, copy, nonatomic) id /* block */ horizontalGroup;
@property (readonly, copy, nonatomic) id /* block */ stackGroup;
@property (readonly, copy, nonatomic) id /* block */ text;
@property (readonly, copy, nonatomic) id /* block */ rectangle;

- (void)inflateSubviewsIntoMap:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
