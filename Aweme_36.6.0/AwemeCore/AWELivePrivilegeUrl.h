@class NSString;

@interface AWELivePrivilegeUrl : AWEBaseApiModel

@property (copy, nonatomic) NSString *privilegePanelSchema;
@property (copy, nonatomic) NSString *privilegeCardSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
