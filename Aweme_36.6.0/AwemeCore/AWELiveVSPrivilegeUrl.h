@class NSString;

@interface AWELiveVSPrivilegeUrl : AWEBaseApiModel

@property (copy, nonatomic) NSString *privilegePanelSchema;
@property (copy, nonatomic) NSString *privilegeCardSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
