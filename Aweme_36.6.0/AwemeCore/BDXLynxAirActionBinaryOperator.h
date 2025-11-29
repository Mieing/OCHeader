@class NSString;

@interface BDXLynxAirActionBinaryOperator : NSObject <BDXLynxAirActionOperational>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executeUsingParams:(id)a0 arguments:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (unsigned long long)operandCount;


@end
