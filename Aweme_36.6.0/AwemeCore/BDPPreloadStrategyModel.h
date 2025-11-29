@class NSNumber, NSString, BDPSchema;

@interface BDPPreloadStrategyModel : NSObject

@property (retain, nonatomic) BDPSchema *schema;
@property (retain, nonatomic) NSNumber *indexNumber;
@property (retain, nonatomic) NSString *caller;

+ (id)modelWithSchema:(id)a0 andIndex:(id)a1;

- (void).cxx_destruct;

@end
