@class NSArray, NSString;

@interface EAIMapValueProcessor : NSObject <EAIValueProcessor>

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)process:(id)a0 rule:(id)a1 currentValues:(id)a2 output:(id)a3;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0 values:(id)a1;

@end
