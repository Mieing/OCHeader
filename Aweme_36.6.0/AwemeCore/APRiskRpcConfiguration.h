@class NSString, NSDictionary;

@interface APRiskRpcConfiguration : NSObject

@property (nonatomic) int timeout;
@property (retain, nonatomic) NSString *gatewayURL;
@property (retain, nonatomic) NSDictionary *headers;

- (void).cxx_destruct;

@end
