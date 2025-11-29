@class NSString, NSDictionary;

@interface BDPBusinessBridgeMethod : NSObject

@property (copy, nonatomic) NSString *APIName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *innerFrom;

+ (id)methodWithAPIName:(id)a0 params:(id)a1;
+ (id)methodWithAPIName:(id)a0 params:(id)a1 innerFrom:(id)a2;

- (void).cxx_destruct;

@end
