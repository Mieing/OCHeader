@class NSString, NSDictionary, QBusinessConf;

@interface QBussinessSetting : NSObject

@property (retain, nonatomic) NSString *sdk_protocol;
@property (retain, nonatomic) NSString *_private_partner;
@property (retain, nonatomic) QBusinessConf *business_conf;
@property (retain, nonatomic) NSDictionary *services;

+ (BOOL)validateDict:(id)a0 withAPIKey:(id)a1;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;

@end
