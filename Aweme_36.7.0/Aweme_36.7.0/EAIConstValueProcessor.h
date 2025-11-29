@class NSString;

@interface EAIConstValueProcessor : NSObject <EAIValueProcessor>

@property (nonatomic) float value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)process:(id)a0 rule:(id)a1 currentValues:(id)a2 output:(id)a3;
- (id)initWithValue:(float)a0;

@end
