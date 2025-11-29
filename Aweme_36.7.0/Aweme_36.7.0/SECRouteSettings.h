@class NSDictionary;

@interface SECRouteSettings : NSObject

@property BOOL enabled;
@property BOOL sceneStackEnabled;
@property BOOL eventFlowDetectAllEnabled;
@property BOOL useRulerPolicy;
@property BOOL useEventFlowEngine;
@property (copy) NSDictionary *internalNestedType;

+ (id)sharedSettings;

- (void).cxx_destruct;

@end
