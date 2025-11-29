@class NSString, NSArray;

@interface NLERichText_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichText> { struct NLERichText *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *styles;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichText> { struct NLERichText *x0; struct __shared_weak_count *x1; })a0;
- (void)clearStyle;
- (void).cxx_destruct;
- (id)init;
- (void)removeStyle:(id)a0;
- (void)addStyle:(id)a0;

@end
