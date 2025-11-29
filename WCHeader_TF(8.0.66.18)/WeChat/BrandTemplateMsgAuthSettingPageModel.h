@class NSString;

@interface BrandTemplateMsgAuthSettingPageModel : MMObject

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int totalSwitch;
@property (nonatomic) unsigned long long templateSize;
@property (retain, nonatomic) NSString *templateIdListStr;
@property (retain, nonatomic) NSString *templateOriginStatusListStr;
@property (retain, nonatomic) NSString *templateTitleListStr;
@property (retain, nonatomic) NSString *templateTypeListStr;
@property (retain, nonatomic) NSString *templateSelectStatusListStr;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long enterTimestamp;

- (void)updateOriginInfoWithScopeCache:(id)a0;
- (void)updateSelectInfoWithScopeCache:(id)a0;
- (void)updateTotolSwitchWithScopeCache:(id)a0;
- (id)generateTemplateIdListStr:(id)a0;
- (id)generateTemplateTitleListStr:(id)a0;
- (id)generateTemplateTypeListStr:(id)a0;
- (id)generateTemplateStatusListStr:(id)a0;
- (void).cxx_destruct;

@end
