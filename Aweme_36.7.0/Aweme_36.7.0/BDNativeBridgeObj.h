@class NSString, NSDictionary;

@interface BDNativeBridgeObj : NSObject

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *callbackId;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *iFrameID;

- (void).cxx_destruct;

@end
