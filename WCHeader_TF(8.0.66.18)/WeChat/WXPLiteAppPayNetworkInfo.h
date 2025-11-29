@class NSString, NSNumber, NSDictionary;

@interface WXPLiteAppPayNetworkInfo : NSObject <LiteAppDynamicModuleObject>

@property (retain, nonatomic) NSString *oaid;
@property (retain, nonatomic) NSNumber *adbEnable;
@property (retain, nonatomic) NSNumber *developmentSettingEnable;
@property (retain, nonatomic) NSDictionary *extendInfo;
@property (nonatomic) BOOL *isWechatClient;
@property (retain, nonatomic) NSNumber *fontLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toDictionary;
- (id)getDictionaryFromJsonString:(id)a0;
- (void).cxx_destruct;

@end
