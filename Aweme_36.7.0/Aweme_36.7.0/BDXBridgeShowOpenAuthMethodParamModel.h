@class NSDictionary, NSString, NSNumber;

@interface BDXBridgeShowOpenAuthMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *certificationInfo;
@property (copy, nonatomic) NSString *client_key;
@property (copy, nonatomic) NSString *redirect_uri;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSString *response_type;
@property (retain, nonatomic) NSNumber *not_skip_confirm;
@property (copy, nonatomic) NSString *comment_id;
@property (copy, nonatomic) NSString *agreement_id;
@property (retain, nonatomic) NSNumber *proto_show;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
