@class NSArray;

@interface FlowUIKit.BoolMatrix : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, readonly) long long dimension;
@property (nonatomic, readonly) NSArray *flattened;

- (id)initWithDimension:(long long)a0 flattened:(id)a1;
- (id)initWithDimension:(long long)a0 rawFlattenedInt:(id)a1;
- (id)initWithDimension:(long long)a0;

@end
