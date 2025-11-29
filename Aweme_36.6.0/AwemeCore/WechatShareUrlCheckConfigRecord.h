@class WechatShareUrlCheckConfig;

@interface WechatShareUrlCheckConfigRecord : NSObject

@property (nonatomic) unsigned long long lastReqTimeStamp;
@property (retain, nonatomic) WechatShareUrlCheckConfig *config;

- (id)initWithParamDictionary:(id)a0;
- (id)genDictionaryToSave;
- (void).cxx_destruct;

@end
