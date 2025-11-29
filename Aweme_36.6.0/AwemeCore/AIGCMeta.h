@class NSString;

@interface AIGCMeta : NSObject

@property (copy, nonatomic) NSString *Label;
@property (copy, nonatomic) NSString *ContentProducer;
@property (copy, nonatomic) NSString *ContentPropagator;

- (id)initWithLabel:(id)a0 contentProducer:(id)a1 contentPropagator:(id)a2;
- (void).cxx_destruct;

@end
