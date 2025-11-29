@interface IESECSKURawParamsHandler : NSObject

+ (id)passThrough:(id)a0 findPassThroughItem:(id)a1;
+ (id)rawSKUParams:(id)a0 updateValueFromPath:(id)a1 data:(id)a2;
+ (id)schemaParamsFromRaw:(id)a0;
+ (id)rawSKUParams:(id)a0 valueFromPath:(id)a1;
+ (id)passThrough:(id)a0 updatePassThroughItem:(id)a1 data:(id)a2;
+ (id)passThrough:(id)a0 addPassThroughItem:(id)a1 data:(id)a2;

@end
