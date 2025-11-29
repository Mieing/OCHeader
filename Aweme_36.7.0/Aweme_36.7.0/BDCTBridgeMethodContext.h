@class NSString, NSDictionary;

@interface BDCTBridgeMethodContext : NSObject

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSDictionary *bridgeParams;

- (void).cxx_destruct;

@end
