@class NSArray, NSString;

@interface EAIOneHotValueProcessor : NSObject <EAIValueProcessor>

@property (retain, nonatomic) NSArray *enums;
@property (copy, nonatomic) NSString *other;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)process:(id)a0 rule:(id)a1 currentValues:(id)a2 output:(id)a3;
- (id)initWithEnums:(id)a0 other:(id)a1;
- (void).cxx_destruct;

@end
