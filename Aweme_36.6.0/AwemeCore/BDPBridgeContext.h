@class NSString, NSArray, NSDictionary;

@interface BDPBridgeContext : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *namesapce;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSArray *inParams;
@property (copy, nonatomic) NSDictionary *inParamsDic;
@property (copy, nonatomic) NSDictionary *outParams;

- (void).cxx_destruct;

@end
