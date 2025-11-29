@class NSString;

@interface TSPKCallStackFilterFunc : NSObject <PNSREFunc>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)symbol;
- (id)execute:(id)a0 error:(id *)a1;

@end
