@class NSString, NSMutableDictionary;

@interface AmoebaViewDataEntity : NSObject

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSMutableDictionary *viewParams;
@property (retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks;
@property (retain, nonatomic) NSMutableDictionary *reportBreakerBlocks;
@property (retain, nonatomic) NSMutableDictionary *innerProperty;
@property (retain, nonatomic) NSMutableDictionary *reportPolicy;

- (id)init;
- (void)reset;
- (id)toString;
- (void).cxx_destruct;

@end
