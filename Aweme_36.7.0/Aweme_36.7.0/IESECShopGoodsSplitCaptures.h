@class NSArray;

@interface IESECShopGoodsSplitCaptures : NSObject {
    id /* block */ _operation;
    NSArray *_elements;
}

+ (id)splitCapturesWithSeparateOperation:(id /* block */)a0 elements:(id)a1;

- (id)makeIterator;
- (id)initWithSeparateOperation:(id /* block */)a0 elements:(id)a1;
- (void).cxx_destruct;

@end
