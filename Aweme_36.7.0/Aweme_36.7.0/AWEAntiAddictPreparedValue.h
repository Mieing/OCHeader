@class NSString, NSDateInterval;

@interface AWEAntiAddictPreparedValue : MTLModel <MTLJSONSerializing>

@property (retain) id value;
@property BOOL expired;
@property BOOL persistence;
@property (retain) NSDateInterval *validDateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preparedValueWithValue:(id)a0 expired:(BOOL)a1 persistence:(BOOL)a2;
+ (id)preparedValueWithValue:(id)a0 validDateInterval:(id)a1;

- (id)initWithValue:(id)a0 expired:(BOOL)a1 persistence:(BOOL)a2;
- (void).cxx_destruct;

@end
