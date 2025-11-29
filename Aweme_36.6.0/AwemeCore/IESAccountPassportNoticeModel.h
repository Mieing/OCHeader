@class IESAccountBindMobileAlertModel, NSString;

@interface IESAccountPassportNoticeModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESAccountBindMobileAlertModel *bindMobileAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
