@protocol NSCopying;

@interface BDREOutputGraphNode : BDREGraphNode

@property (readonly, nonatomic) id<NSCopying> value;

- (id)initWithOutputValue:(id)a0;
- (void)travelWithFootPrint:(id)a0;
- (void).cxx_destruct;

@end
