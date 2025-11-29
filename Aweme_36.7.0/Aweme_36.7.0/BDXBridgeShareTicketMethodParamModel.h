@class NSString;

@interface BDXBridgeShareTicketMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL show_outsite_push_auth_panel;
@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *ticket_generate;
@property (copy, nonatomic) NSString *extra_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
