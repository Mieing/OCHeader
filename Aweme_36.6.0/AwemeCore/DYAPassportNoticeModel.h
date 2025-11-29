@class DYABindMobileAlertModel, NSString;

@interface DYAPassportNoticeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DYABindMobileAlertModel *bindMobileAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
