@class NSString, NSDictionary;

@interface BDPSecurityPluginModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSDictionary *inParamsDic;

- (void).cxx_destruct;

@end
