@class WCFinderBuildLiteAppConfig, WCFinderBuildJumpConfig;

@interface WCFinderBuildJumpLiteModel : NSObject

@property (retain, nonatomic) WCFinderBuildJumpConfig *jump_info_config;
@property (retain, nonatomic) WCFinderBuildLiteAppConfig *lite_app_config;

- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (id)genJumpInfo;
- (void).cxx_destruct;

@end
