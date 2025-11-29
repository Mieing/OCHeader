@class NSDateInterval, NSString, NSDate;

@interface AWEAntiAddictStrategyValue : MTLModel <MTLJSONSerializing>

@property (retain) id value;
@property (retain) NSDate *validDate;
@property (retain) NSDateInterval *validDateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(id)a0 validDateInterval:(id)a1;
- (id)initWithValue:(id)a0 validDate:(id)a1;
- (void).cxx_destruct;

@end
