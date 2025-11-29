@class NSArray, NSString;

@interface AWETransformerLayoutStrategyAbsolute : NSObject <AWETransformerLayoutStrategyProtocol>

@property (copy, nonatomic) NSArray *childs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerElement:(id)a0;
- (void)calculateLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
