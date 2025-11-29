@class NSString;

@interface BDPCDDynamicCardTemplateModelCacheKeyModel : NSObject

@property (copy, nonatomic) NSString *schemaVersion;
@property (copy, nonatomic) NSString *cardVersion;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *cardEntityType;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *bizType;

- (void).cxx_destruct;

@end
