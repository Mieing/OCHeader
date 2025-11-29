@class NSString, NSDictionary;

@interface OpenHunterContainerParamModel : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *serverData;
@property (copy, nonatomic) NSDictionary *clientData;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *popupConfig;

- (void).cxx_destruct;

@end
